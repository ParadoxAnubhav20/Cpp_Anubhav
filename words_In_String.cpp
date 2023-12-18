#include <iostream>
#include <string>
using namespace std;
int words(string s) {
    int count = 1; // Initialize count to 1 for the first word
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            count++;
        }
    }
    return count;
}
int main() {
    string s = "I Love To Watch Anime";
    cout << "Number of words: " << words(s) << endl;
    return 0;
}
