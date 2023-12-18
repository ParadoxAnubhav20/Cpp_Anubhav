#include <iostream>
#include <algorithm>
using namespace std;

void display(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void bubbleSort(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }

        // Display the array after each pass
        cout << "After pass " << i + 1 << ": ";
        display(arr, size);
    }
}

int main() {
    int arr[10] = {3, 1, 7, 4, 14, 2, 6, 9, 0, 10,};
    cout << "Original Array: ";
    display(arr, 10);
    bubbleSort(arr, 10);
    cout << "Sorted Array: ";
    display(arr, 10);
    return 0;
}
