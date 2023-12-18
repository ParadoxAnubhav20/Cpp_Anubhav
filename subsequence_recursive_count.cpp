#include <iostream>
#include <vector>
using namespace std;
int target;
int printS(int idx, int sum, int arr[], int n) {
    // Base case: If we have processed all elements in the array
    if (idx == n) {
        // Check if the current sum equals the target sum
        if (sum == target) {
            return 1;
        }
        //not equals
        else return 0;
    }
    // Pick the current element
    sum += arr[idx];
    int l=printS(idx + 1, sum, arr, n);
    sum -= arr[idx];
    // Do not pick the current element
    int r=printS(idx + 1, sum, arr, n);
    return l+r;
}
int main() {
    int n;
    cout << "Enter the size: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the target sum: ";
    cin >> target;
    // Call the recursive function to print all subsets
    cout<<"Count:"<<printS(0, 0, arr, n);
    return 0;
}
