#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number:";
    cin>>num;
    if(num%3==0 or num%5==0){
        if(num%3==0){
            cout<<"Divisible by 3";
        }
        else
        {
            cout<<"Divisible by 5";
        }
    }
    else
    {
        cout<<"Not Divisible by 3 or 5";
    }
    return 0;
}