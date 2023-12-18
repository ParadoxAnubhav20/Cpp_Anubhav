#include<iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter Age:";
    cin >> age;
    string ans = (age > 18) ? "You're An Adult" : "You're a Minor";
    cout << ans << endl;  // Add endl or remove the newline character from the string
    return 0;
}
