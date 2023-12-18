#include<iostream>
#include<vector>
using namespace std;
// Function to merge two sorted halves of the array
void merge(vector<int>& arr, int l, int mid, int h) {
    vector<int> temp;
    int left = l;
    int right = mid + 1;
    // Compare elements from both halves and merge them in sorted order
    while (left <= mid && right <= h) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left++]);
        }
        else {
            temp.push_back(arr[right++]);
        }
    }
    // Copy any remaining elements from the left half
    while (left <= mid) {
        temp.push_back(arr[left++]);
    }
    // Copy any remaining elements from the right half
    while (right <= h) {
        temp.push_back(arr[right++]);
    }
    // Copy the merged elements back to the original array
    for (int i = 0; i < temp.size(); i++) {
        arr[i + l] = temp[i];
    }
}
// Function to perform merge sort on the array
void mergeSort(vector<int>& arr, int l, int h) {
    // Base case: if the array has 0 or 1 element, it is already sorted
    if (l >= h) return;
    // Divide the array into two halves and recursively sort them
    int mid = (l + h) / 2;
    mergeSort(arr, l, mid); // sorting the left half
    mergeSort(arr, mid + 1, h); // sorting the right half
    // Merge the sorted halves
    merge(arr, l, mid, h);
}
int main() {
    int n;
    cout << "Enter Size: ";
    cin >> n;
    // Create a vector to store the elements
    vector<int> v(n);
    cout << "Enter the Elements: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << "Before Sorting: ";
    for (auto i : v) {
        cout << i << " ";
    }
    cout << "\n";
    cout << "After Sorting: \n";
    mergeSort(v, 0, n - 1);
    cout << "The Elements Are: ";
    for (auto i : v) {
        cout << i << " ";
    }
    cout << "\n";
    return 0;
}
