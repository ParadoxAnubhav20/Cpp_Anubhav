#include<iostream>
#include<algorithm>
using namespace std;
// Modify the function to take the string by reference
void reverseString(string &s) {
    int start = 0;
    int end = s.size() - 1;
    while (start < end) {
        swap(s[start], s[end]);
        start++;
        end--;
    }
}
int main() {
    string s;
    cout << "Enter The String:";
    getline(cin, s);
    // Call the function to reverse the string in-place
    reverseString(s);
    cout << "The Reversed String is: " << s << endl;
    return 0;
}
