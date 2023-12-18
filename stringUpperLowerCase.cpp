#include<iostream>
using namespace std;
int main() {
    char c;
    cin >> c;
    cout << c << endl;
    if (c >= 'a' && c <= 'z') {
        // Convert lowercase to uppercase
        c = c - 'a' + 'A';
    } else if (c >= 'A' && c <= 'Z') {
        // Convert uppercase to lowercase
        c = c - 'A' + 'a';
    }
    cout << c << endl;
    return 0;
}
