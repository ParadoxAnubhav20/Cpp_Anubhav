#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number:";
    cin>>n;
    int sum=0;
    int i=1;//loop variable
    while(i<=n){
        sum+=i;
        i++; //condition
    }
    cout<<sum;
    return 0;
}