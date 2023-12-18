#include <iostream>
using namespace std;

// Linear search function takes in an array and its size as input
int linearsearch(int arr[], int size) {
    int key, ans = -1;
    // Prompt user to enter the key to search for
    cout << "Enter the key to find: ";
    cin >> key;

    // Iterate through the array and check if key is found
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            // If key is found, store the index in ans and return it
            ans = i;
            return ans;
        }
    }
    // If key is not found, return -1
    return ans;
}

int main() {
    // Declare and initialize an array
    const int size = 6;
    int arr[size] = { 3, 5, 7, 9, 11, 13 };

    // Call linear search function and pass array and its size
    cout << linearsearch(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
}

