#include<bits/stdc++.h>
using namespace std;
int main() {
    int k = 4;
    int n = 5;
    vector<int> arr = {2, 3, 4, 5, 6};
    vector<int> ans;
    for (int i = 0; i < 1e4; i++) {
        bool divisible = false; // A flag to check if i is divisible by any element in arr
        for (int j = 0; j < 5; j++) {
            if (i % arr[j] == 0) {
                divisible = true;
                break; // No need to check further if i is divisible by any element
            }
        }
        if (!divisible) {
            ans.push_back(i);
            if (ans.size() == k) {
                break;
            }
        }
    }
    int sum = 0;
    for (int num : ans) {
        sum += num;
    }
    cout << "Sum of the first " << k << " numbers not divisible by any elements in arr: " << sum << endl;
    return 0;
}
