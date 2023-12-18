#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void revArray(int i, vector<int>& arr) {
    int size = arr.size();
    if (i >= size / 2) {
        return;
    }
    swap(arr[i], arr[size - 1 - i]);
    revArray(i + 1, arr);
}
int main() {
    int n;
    cout << "Enter Size: ";
    cin >> n;   
    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    revArray(0, arr);
    cout << "Reversed Array: ";
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
