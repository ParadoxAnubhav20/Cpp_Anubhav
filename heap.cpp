#include<bits/stdc++.h>
using namespace std;
// Define the maximum size of the heap
const int N = 1e3;
// Function to insert a value into the min-heap
void insertInMinHeap(int minHeap[], int& length, int val) {
    length++;
    minHeap[length] = val;
    int curr = length;
    // Adjust the position of the newly inserted value to maintain the min-heap property
    while (curr / 2 > 0 && minHeap[curr] < minHeap[curr/2]) {
        swap(minHeap[curr], minHeap[curr/2]);
        curr /= 2;
    }
}
// Function to print the elements of the heap
void printHeap(int heap[], int size) {
    cout << "Heap Elements:";
    for (int i = 1; i <= size; i++) {
        cout << " " << heap[i];
    }
    cout << endl;
}
int main() {
    int minHeap[N] = {-1, 10, 20, 30, 40, 50}; // Initialize heap with values
    int size = 5; // Current size of the heap
    cout << "Enter a value to insert into the heap: ";
    int val;
    cin >> val; // User input for the new value
    insertInMinHeap(minHeap, size, val); // Insert the new value into the heap
    printHeap(minHeap, size); // Print the updated heap
    return 0;
}
