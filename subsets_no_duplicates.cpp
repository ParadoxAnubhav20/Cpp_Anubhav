#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> ans;
    
    // Function to find subsets
    void findSubsets(int idx, vector<int>& nums, vector<int>& ds) {
        ans.push_back(ds);  // Add the current subset to the result
        
        for (int i = idx; i < nums.size(); i++) {
            // Skip adding duplicate elements
            if (i != idx && nums[i] == nums[i - 1])
                continue;
            
            ds.push_back(nums[i]);  // Add the current number to the subset
            findSubsets(i + 1, nums, ds);  // Recursively find subsets with the remaining numbers
            ds.pop_back();  // Backtrack by removing the current number from the subset
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> empty;  // Empty vector to store the subsets
        sort(nums.begin(), nums.end());  // Sort the input array to handle duplicates
        findSubsets(0, nums, empty);  // Find subsets starting from index 0
        return ans;  // Return the result
    }
};

int main() {
    Solution sol;
    
    // Example usage
    vector<int> nums = {1, 2, 2};
    vector<vector<int>> subsets = sol.subsetsWithDup(nums);
    
    cout << "Subsets with duplicates: " << endl;
    for (const auto& subset : subsets) {
        cout << "[ ";
        for (const auto& num : subset) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }
    
    return 0;
}
