#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
vector<int> get_min(vector<int> ar) {
    vector<int> arr(2);
    int n = ar[0];
    int even = 0;
    for (int i = 0; i < ar.size(); i++) {
        if (ar[i] % 2 == 0 && ar[i] <= n) {
            n = ar[i];
            even++;
        }
    }
    arr[0] = n;
    arr[1] = even;
    return arr;
}
int main() {
    string s;
    cout << "Enter the string:- ";
    getline(cin, s);
    vector<int> ar;
    set<int> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            st.insert(s[i] - '0');
        }
    }
    ar.assign(st.begin(), st.end());
    sort(ar.rbegin(), ar.rend());
    vector<int> min = get_min(ar);
    cout << "Output : ";
    if (min[1] == 0) {
        cout << -1 << endl;
    } else {
        ar.erase(find(ar.begin(), ar.end(), min[0]));
        for (int i : ar) {
            cout << i;
        }
        cout << min[0] << endl;
    }
    return 0;
}
