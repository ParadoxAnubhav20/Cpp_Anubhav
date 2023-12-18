#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool checkPalindrome(string s) {
    string s1 = s;
    reverse(s1.begin(), s1.end());
    int l = s.size();
    for (int i = 0; i < l; i++) {
        if (s1[i] != s[i]) {
            return false;
        }
    }
    return true;
}
int main(){
    bool ans=checkPalindrome("ABBAR");
    cout<<ans;
}
