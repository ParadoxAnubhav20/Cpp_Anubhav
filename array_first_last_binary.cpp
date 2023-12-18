#include <iostream>
#include <vector>

using namespace std;

int find_first_occurrence(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return (nums[left] == target) ? left : -1;
}

int find_last_occurrence(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (left < right) {
        int mid = left + (right - left + 1) / 2;
        if (nums[mid] > target) {
            right = mid - 1;
        } else {
            left = mid;
        }
    }
    return (nums[left] == target) ? left : -1;
}

int main() {
    vector<int> nums = {1, 2, 3, 3, 3, 4, 5};
    int target = 3;
    int first = find_first_occurrence(nums, target);
    int last = find_last_occurrence(nums, target);
    if (first != -1 && last != -1) {
        cout << "First occurrence at index " << first << endl;
        cout << "Last occurrence at index " << last << endl;
    } else {
        cout << "Element not found in array" << endl;
    }
    return 0;
}
