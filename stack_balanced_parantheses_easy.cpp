#include<iostream>
#include<stack>
using namespace std;
int main(){
    string str="(([(())]))";
    stack<char> s;
    for(int i=0;i<str.length();i++){
        if((s.size()!=0 && s.top()=='(' && str[i]==')') || (s.size()!=0 && s.top()=='{' && str[i]=='}') || (s.size()!=0 && s.top()=='[' && str[i]==']'))
        {
            s.pop();
        }
        else{
            s.push(str[i]);
        }
    }
    if(s.size()==0){
        cout<<"Balanced\n";
    }
    else{
        cout<<"Not Balanced\n";
    }
    return 0;
}