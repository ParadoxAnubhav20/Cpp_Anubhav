#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<string> valid;
    // Function to generate valid parentheses
    void generate(string& s, int open, int close) {
        // Base case: when no more opening and closing brackets are remaining
        if (open == 0 && close == 0) {
            valid.push_back(s);  // Add the generated string to the vector of valid parentheses
            return;
        }
        // Insert an opening bracket if there are still opening brackets remaining
        if (open > 0) {
            s.push_back('(');
            generate(s, open - 1, close);  // Recursively generate parentheses with one less opening bracket
            s.pop_back();  // Backtrack by removing the inserted opening bracket
        }
        // Insert a closing bracket if there are still closing brackets remaining
        if (close > 0) {
            // Ensure that the number of opening brackets is less than the number of closing brackets
            if (open < close) {
                s.push_back(')');
                generate(s, open, close - 1);  // Recursively generate parentheses with one less closing bracket
                s.pop_back();  // Backtrack by removing the inserted closing bracket
            }
        }
    }
    vector<string> generateParenthesis(int n) {
        string s;
        generate(s, n, n);
        return valid;
    }
};
int main() {
    Solution sol;
    int n = 4;
    vector<string> result = sol.generateParenthesis(n);
    cout << "Generated valid parentheses for n = " << n << ":" << endl;
    for (const string& s : result) {
        cout << s << endl;
    }
    return 0;
}
