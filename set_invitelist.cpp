#include<iostream>
#include<set>
using namespace std;

int main() {
    set<string> invitelist;
    int n;
    cout << "Enter the number of names to be entered: ";
    cin >> n;
    while (n != 0) {
        string name;
        cin >> name;
        invitelist.insert(name);
        n--;
    }
    cout << "The invited people are: ";
    for (auto it : invitelist) {
        cout << it << " ";
    }
    return 0;
}
