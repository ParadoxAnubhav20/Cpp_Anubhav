#include <iostream>
#include <cstring>
using namespace std;
char maxOccurringChar(string str) {
    int freq[256] = {0};
    int maxFreq = 0;
    char maxChar = '\0';
    // Iterate through the string and update frequency of each character
    for (char c : str) {
        freq[c]++;
        if (freq[c] > maxFreq) {
            maxFreq = freq[c];
            maxChar = c;
        }
    }
    return maxChar;
}
int main() {
    string str = "hello world";
    char maxChar = maxOccurringChar(str);
    cout << "Maximum occurring character is " << maxChar << endl;
    return 0;
}
