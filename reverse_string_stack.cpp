#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    string str="NETWORK SECURITY";
    stack<char> st;
    for(char c:str){
        st.push(c);
    }
    for(int i=0;i<str.length();i++){
        str[i]=st.top();
        st.pop();
    }
    cout<<"The Reversed String is:"<<str<<endl;
    return 0;
}