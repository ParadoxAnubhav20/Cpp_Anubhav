#include<iostream>
using namespace std;
int lastOccurence(int arr[], int n, int key) {
    // base case
    if (n == 0) return -1;
    int subIndex = lastOccurence(arr + 1, n - 1, key); // Subtract 1 from n to reduce the array size
    if (subIndex == -1) {
        if (arr[0] == key) return 0;
        else return -1;
    }
    else return subIndex + 1; // Change subIndex + 1 to subIndex
}
int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target to find: ";
    cin >> target;
    cout << "Last Occurrence: " << lastOccurence(arr, size, target) << endl;
    return 0;
}
