#include<iostream>
using namespace std;
void findDigits(int& n){
    while(n!=0){
        int lastDigit=n%10;
        cout<<"Digits are in reverse:"<<lastDigit<<" ";
        n/=10;
        cout<<"\n";
    }
}
int main(){
    int num;
    cout<<"Enter a Number:";
    cin>>num;
    findDigits(num);
    return 0;
}