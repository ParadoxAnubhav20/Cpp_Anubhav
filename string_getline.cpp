#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s,'.');
    for(char c:s){
        cout<<c<<",";
    }
    cout<<"\n";
    cout<<s;
    return 0;
}