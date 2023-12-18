#include<iostream>
#include<vector>
using namespace std;
int main(){
    bool sorted=true;
    int arr[]={9,2,6,15,7,8};
    for(int i=1;i<6;i++){
        if(arr[i]<=arr[i-1]){
            sorted=false;
        }
    }
    cout<<sorted;
}