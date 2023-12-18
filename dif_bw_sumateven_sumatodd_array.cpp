#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={3,6,9,80,34,56};
    int anssum=0;
    for(int i=0;i<6;i++){
        if(i%2==0){
            anssum+=arr[i];
        }
        else{
            anssum-=arr[i];
        }
    }
    cout<<anssum;
    return 0;
}