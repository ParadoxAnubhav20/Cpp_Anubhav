#include <iostream>
using namespace std;
// Function to find the index and value of the maximum element in an array
void max_ele_index(int* arr, int size) {
    int max_ele = arr[0]; // Initialize max_ele with the first element of the array
    int idx = 0; // Initialize the index of max_ele as 0
    for (int i = 1; i < size; i++) { // Start the loop from the second element (index 1)
        if (arr[i] > max_ele) { // Compare the current element with the current maximum
            max_ele = arr[i]; // Update max_ele if the current element is greater
            idx = i; // Update the index of max_ele
        }
    }
    // Output the index and value of the maximum element
    cout << "Max Index is: " << idx << " Max Element is: " << max_ele << endl;
}
int main() {
    int arr[6] = { 3, 1, 7, 8, 9, 11 };
    // Call the function to find and print the index and value of the maximum element
    max_ele_index(arr, 6);
    return 0;
}
