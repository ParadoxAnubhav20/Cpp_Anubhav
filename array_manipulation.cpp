#include<iostream>
using namespace std;
void printarray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr1[] = {2, 5, 1};
    int arr2[3];
    for (int i = 0; i < 3; i++) {
        arr2[i] = arr1[i];
    }
    printarray(arr1, 3);
    printarray(arr2, 3);
    arr1[1] = 9;
    printarray(arr1, 3);
    printarray(arr2, 3);
    return 0;
}
