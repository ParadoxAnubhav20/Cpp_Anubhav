#include<iostream>
using namespace std;
int findDigits(int& n){
    int count=0;
    while(n!=0){
        count++;
        n/=10;
    }
    return count;
}
int main(){
    int num;
    cout<<"Enter a Number:";
    cin>>num;
    cout<<findDigits(num);
    return 0;
}