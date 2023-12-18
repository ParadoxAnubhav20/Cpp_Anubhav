#include <iostream>
#include <vector>
using namespace std;
int target;
vector<int> ds;
bool printS(int idx, int sum, int arr[], int n) {
    // Base case: If we have processed all elements in the array
    if (idx == n) {
        // Check if the current sum equals the target sum
        if (sum == target) {
            // Print the subset that adds up to the target sum
            for (auto i : ds) {
                cout << i << " ";
            }
            cout << endl;
            return true;
        }
        else return false;
    }
    // Pick the current element
    ds.push_back(arr[idx]);
    sum += arr[idx];
    if(printS(idx + 1, sum, arr, n)==true) return true;
    sum -= arr[idx];
    ds.pop_back();
    // Do not pick the current element
    if(printS(idx + 1, sum, arr, n)==true) return true;
    return false;
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
    printS(0, 0, arr, n);
    return 0;
}
