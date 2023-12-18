#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,3,4,5,7,8},brr[10]={2,3,5,6,7,9};
    int ans[10],idx=0;
    for(int i=0;i<6;i++){
        int element=arr[i];
        for(int j=0;j<6;j++){
            if(element==brr[j]){
                ans[idx++]=element;
                break;
            }
        }
    }
    cout<<"The common elements are:";
        for(int i=0;i<idx;i++){
            cout<<ans[i]<<" ";
        }
        
        return 0;
    }