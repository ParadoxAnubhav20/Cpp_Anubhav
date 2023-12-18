#include<iostream>
#include<stack>
#include<cmath>
using namespace std;
// Function to perform arithmetic calculations based on the operator
int calc(int v1, int v2, char op) {
    if (op == '^') return pow(v1, v2);
    if (op == '*') return v1 * v2;
    if (op == '+') return v1 + v2;
    if (op == '/') return v1 / v2;
    else return v1 - v2;
}
// Function to evaluate the postfix expression and return the result
int eval(string& str) {
    stack<int> st;
    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        if (isdigit(ch)) {
            // If the character is a digit, convert it to an integer and push it onto the stack
            st.push(ch - '0');
        } else {
            // If the character is an operator, perform the operation on the top two values from the stack
            int v2 = st.top();
            st.pop();
            int v1 = st.top();
            st.pop();
            int result = calc(v1, v2, ch);
            st.push(result);
            cout << "Performed " << v1 << " " << ch << " " << v2 << " = " << result << endl;
        }
    }
    return st.top();
}
int main() {
    // Sample postfix expressions
    string s1 = "231*+9-"; // Output: -4
    string s2 = "54+83-*"; // Output: 17
    string s3 = "72-62-+"; // Output: -3
    cout << "Evaluating postfix expression: " << s1 << endl;
    int result1 = eval(s1);
    cout << "Result: " << result1 << endl;
    cout << endl;
    cout << "Evaluating postfix expression: " << s2 << endl;
    int result2 = eval(s2);
    cout << "Result: " << result2 << endl;
    cout << endl;
    cout << "Evaluating postfix expression: " << s3 << endl;
    int result3 = eval(s3);
    cout << "Result: " << result3 << endl;
    cout << endl;
    return 0;
}
