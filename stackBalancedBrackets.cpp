#include <iostream>
#include <stack>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;  // Create a stack to store opening brackets
        for(int i = 0; i < s.length(); i++) {
            char c = s[i];  // Get the current character
            if(c == '(' || c == '{' || c == '[') {
                st.push(c);  // If it is an opening bracket, push it onto the stack
            }
            else {
                if(st.empty()) {
                    return false;  // If there are no opening brackets in the stack, it is not valid
                }
                // Check if the current character is a closing bracket and matches the top of the stack
                if(c == ')' && st.top() == '(') {
                    st.pop();  // If it matches, pop the opening bracket from the stack
                }
                else if(c == '}' && st.top() == '{') {
                    st.pop();  // If it matches, pop the opening bracket from the stack
                }
                else if(c == ']' && st.top() == '[') {
                    st.pop();  // If it matches, pop the opening bracket from the stack
                }
                else {
                    return false;  // If it doesn't match, the string is not valid
                }
            }
        }
        // If there are any remaining opening brackets in the stack, the string is not valid
        return st.empty();
    }
};
int main() {
    Solution solution;
    // Sample inputs
    string input1 = "()";
    string input2 = "()[]{}";
    string input3 = "(]";
    string input4 = "([)]";
    string input5 = "{[]}";
    // Check validity of each input
    cout << "Input: " << input1 << ", Valid: " << (solution.isValid(input1) ? "true" : "false") << endl;
    cout << "Input: " << input2 << ", Valid: " << (solution.isValid(input2) ? "true" : "false") << endl;
    cout << "Input: " << input3 << ", Valid: " << (solution.isValid(input3) ? "true" : "false") << endl;
    cout << "Input: " << input4 << ", Valid: " << (solution.isValid(input4) ? "true" : "false") << endl;
    cout << "Input: " << input5 << ", Valid: " << (solution.isValid(input5) ? "true" : "false") << endl;
    
    return 0;
}
