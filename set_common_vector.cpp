#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main() {
    vector<int> v1 = {1, 1, 2, 3, 3};
    vector<int> v2 = {5, 6, 7, 5, 2, 3, 6};
    set<int> common;
    int ans = 0;
    // Insert elements from v1 into the set
    for (auto it : v1) {
        common.insert(it);
    }
    // Find common elements between v1 and v2, and calculate the sum
    for (auto it : v2) {
        if (common.find(it) != common.end()) {
            ans += it;
        }
    }
    cout << "The sum of common elements is: " << ans << endl;
    return 0;
}
