#include <iostream>
#include <vector>
using namespace std;
void generateSubarrays(const vector<int>& arr) {
    int n = arr.size();
    // Generate all subarrays
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            // Print the subarray from index i to j
            for (int k = i; k <= j; k++) {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}
int main() {
    vector<int> arr = {1, 2, 3, 4};
    generateSubarrays(arr);
    cout<<"Different Vector\n";
    vector<int> brr={2,1,6,7,9};
    generateSubarrays(brr);
    return 0;
}
