#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
bool checkPalindrome(string str) {
   int s=0,e=str.size()-1;
   while(s<=e){
    if(str[s++]!=str[e--]){
        return false;
    }
   }
   return true;
}
int main(){
    string cha;
    cin>>cha;
    //case sensitive
    bool ans=checkPalindrome(cha);
    cout<<ans;
}