#include<iostream>
using namespace std;
bool palindrome(int num){
    int temp=num;
    int rev=0;
    while(temp!=0){
        int lDigit=temp%10;
        rev=rev*10+lDigit;
        temp/=10;
    }
    if(rev==num){
        return true;
    }else{
        return false;
    }
}
int main(){
    int n=121;
    cout<<palindrome(121)<<endl;
    return 0;
}