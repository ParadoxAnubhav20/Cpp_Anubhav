#include<iostream>
using namespace std;
void checkEvenOdd(int& n){
    int bitmask=1;
    if((n & bitmask)==0){
        cout<<"The Number is Even\n";
    }
    else{
        cout<<"The Number is Odd\n";
    }
}
int main(){
    int num;
    cout<<"Enter the Number to Check:";
    cin>>num;
    checkEvenOdd(num);
    return 0;
}