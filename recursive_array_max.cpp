#include <iostream>
using namespace std;
int max_rest(int arr[], int index, int size) {
    if (index == size - 1) {
        return arr[index];
    } else {
        int max_value = max_rest(arr, index + 1, size);
        if (arr[index] > max_value) {
            return arr[index];
        } else {
            return max_value;
        }
    }
}
int main() {
    int ar[5] = {2, 8, 9, 12, 3};
    cout << max_rest(ar, 0, 5);
    return 0;
}
