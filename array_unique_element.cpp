#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int arr[7]={3,5,3,5,7,1,7};
    for(int i=0;i<7;i++){
        //a^a=0 XOR
        sum^=arr[i];
    }
    cout<<sum;
    return 0;
}