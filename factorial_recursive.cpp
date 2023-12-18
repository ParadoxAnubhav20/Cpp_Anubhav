#include<iostream>
using namespace std;
int fact(int n){
    //base case
    if(n==0 || n==1) 
        return 1;
    int ans=n*fact(n-1);
        return ans;
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"The Factorial is:"<<fact(n)<<endl;
    return 0;
}