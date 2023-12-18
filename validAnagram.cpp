#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        // Check if lengths of the strings are different
        if (s.length() != t.length())
            return false;

        int size = s.length();

        // Count the occurrence of each character in the strings
        unordered_map<char, int> charCount;
        for (int i = 0; i < size; i++) {
            charCount[s[i]]++;
            charCount[t[i]]--;
        }

        // Check if any character has a non-zero count
        for (auto& count : charCount) {
            if (count.second != 0)
                return false;
        }

        return true;
    }
};

int main() {
    Solution solution;

    // Sample inputs
    string s1 = "anagram";
    string t1 = "nagaram";
    // Expected output: Yes
    cout << (solution.isAnagram(s1, t1) ? "Yes" : "No") << endl;

    string s2 = "rat";
    string t2 = "car";
    // Expected output: No
    cout << (solution.isAnagram(s2, t2) ? "Yes" : "No") << endl;

    return 0;
}
