#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
    string s="teeth";
    char c='e';
    int count=0;
    for(int i=0;i<s.length();i++){
        if((s[i])==c){
            count++;
        }
    }
    cout<<count;
}