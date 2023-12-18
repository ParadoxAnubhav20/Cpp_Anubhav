#include <iostream>
#include <vector>
using namespace std;
vector<int> getOriginalArray(vector<int> pref) {
    int n = pref.size();
    vector<int> arr(n);
    arr[0] = pref[0];
    for (int i = 1; i < n; ++i) {
        arr[i] = pref[i] ^ pref[i - 1];
    }
    
    return arr;
}
int main() {
    int n;
    cin >> n;
    vector<int> pref(n);
    for (int i = 0; i < n; ++i) {
        cin >> pref[i];
    }
    vector<int> originalArray = getOriginalArray(pref);
    for (int i = 0; i < n; ++i) {
        cout << originalArray[i] << "\n";
    }
    return 0;
}
