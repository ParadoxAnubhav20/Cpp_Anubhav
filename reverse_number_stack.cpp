#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    int num=56123;
    stack<int> st;
    int digit=0;
    while(num!=0){
        digit=num%10;
        st.push(digit);
        num/=10;
    }
    int reverse=0;
    int temp=0;
    int multiplier=1;
    while(!st.empty()){
        digit=st.top();
        st.pop();
        temp=digit*multiplier;
        reverse+=temp;
        multiplier*=10;
    }
    cout<<"The Reversed Number is:"<<reverse<<endl;
    return 0;
}