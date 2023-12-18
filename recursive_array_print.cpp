#include <iostream>
using namespace std;

void print(int arr[], int idx,int size) {
    if(idx >= size) {
        return;
    }
    cout << arr[idx] << " ";
    print(arr, idx+1,size);
}

int main() {
    int arr[5] = {1, 4, 3, 2, 8};
    print(arr, 0,5);
    return 0;
}
