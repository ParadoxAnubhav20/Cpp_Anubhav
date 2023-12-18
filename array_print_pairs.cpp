#include<iostream>
using namespace std;
void pairs(int *arr,int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            cout<<arr[i]<<","<<arr[j]<<"\n";
        }
        cout<<"\n";
    }
}
int main(){
    int arr[5]={10,15,20,25,30};
    pairs(arr,5);
    return 0;
}