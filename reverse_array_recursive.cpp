#include <iostream>
#include <vector>
using namespace std;
void reverseArray(vector<int>& arr, int start, int end) {
    if (start >= end) {
        return;  // Base case: array has been reversed
    }
    // Swap elements at start and end indices
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;   
    // Recursive call to reverse remaining elements
    reverseArray(arr, start + 1, end - 1);
}
int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << "Original Array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    reverseArray(nums, 0, nums.size() - 1);
    cout << "Reversed Array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;    
    return 0;
}
