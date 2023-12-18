#include<iostream>
using namespace std;
void print(int& n){
    for(int i=n-1;i>=0;i--){
        //space
        for(int j=0;j<(n-i-1);j++){
            cout<<" ";
        }
        //star
        for(int k=0;k<(2*i+1);k++){
            cout<<"*";
        }
        //spaces 
        for(int l=0;l<(n-i-1);l++){
            cout<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    int n;
    cout<<"Num:";
    cin>>n;
    print(n);
    return 0;
}