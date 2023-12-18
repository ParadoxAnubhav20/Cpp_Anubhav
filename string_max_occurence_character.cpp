#include<iostream>
#include<cstring>
#include<string>
using namespace std;
char maxoccurence(string s){
    int arr[26]={0};
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int n=0;
        if(ch>='a' && ch<='z'){
            n=ch-'a';
        }
        else{
            n=ch-'A';
        }
        arr[n]++;
    }
    int max=-1,ans=0;
    for(int i=0;i<26;i++){
        if(max<arr[i]){
            ans=i;
            max=arr[i];
        }
    }
    char finalans='a'+ans;
    return finalans;
}
int main(){
    string str;
    getline(cin,str);
    cout<<maxoccurence(str);
}