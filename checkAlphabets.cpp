#include<iostream>
#include<set>
#include<string>
using namespace std;
bool checkAlphabets(string& s) {
    if (s.length() < 26) {
        return false;
    }
    set<char> alphabet;
    // Convert all characters to uppercase
    for (auto& i : s) {
        i = toupper(i);
    }
    // Insert unique characters into the set
    for (auto ch : s) {
        alphabet.insert(ch);
    }
    // Check if the set size is equal to 26
    return alphabet.size() == 26;
}
int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    // Check if the string contains all alphabets
    bool hasAllAlphabets = checkAlphabets(s);
    // Output the result
    if (hasAllAlphabets) {
        cout << "The string contains all alphabets." << endl;
    } else {
        cout << "The string does not contain all alphabets." << endl;
    }
    return 0;
}
