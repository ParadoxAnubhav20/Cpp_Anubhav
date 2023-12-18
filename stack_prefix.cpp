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
// Function to evaluate the prefix expression and return the result
int eval(string& str) {
    stack<int> st;
    for (int i = str.size()-1; i >=0; i--) {
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
    // Sample pre expressions
    string s1 = "-9+*132"; // Output: -4
    cout << "Evaluating prefix expression: " << s1 << endl;
    int result1 = eval(s1);
    cout << "Result: " << result1 << endl;
    return 0;
}
