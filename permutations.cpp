#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> ans;  // Declare and initialize ans as an empty vector

    // Recursive function to generate permutations
    void permutations(vector<int>& ds, vector<int>& nums, int freq[]) {
        if (ds.size() == nums.size()) {
            ans.push_back(ds);  // Add the current permutation to the result
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (!freq[i]) {
                ds.push_back(nums[i]);  // Add the current number to the permutation
                freq[i] = 1;  // Mark the current number as used
                permutations(ds, nums, freq);  // Recursively find permutations with the remaining numbers
                freq[i] = 0;  // Reset the mark for backtracking
                ds.pop_back();  // Remove the current number from the permutation
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> emptyds;  // Empty vector to store permutations
        int freq[nums.size()];  // Frequency array to keep track of used numbers
        for (int i = 0; i < nums.size(); i++) freq[i] = 0;  // Initialize the frequency array
        permutations(emptyds, nums, freq);  // Find permutations starting with an empty permutation
        return ans;  // Return the result
    }
};

int main() {
    Solution sol;

    // Example usage
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> permutations = sol.permute(nums);

    cout << "Permutations: " << endl;
    for (const auto& perm : permutations) {
        cout << "[ ";
        for (const auto& num : perm) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}
