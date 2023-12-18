#include<iostream>
using namespace std;
void print(int arr[],int idx,int size){
    //base case
    if(idx==size){
    return;
    }
    //self work
    cout<<arr[idx]<<" ";
    //prints the remaining array
    print(arr,idx+1,size);
}
int main(){
    int arr[5]={2,4,1,9,2};
    //prints from 0th to last index
    print(arr,0,5);
    return 0;
}