#include<iostream>
using namespace std;
void swap(int *arr,int size){
    int s=0,e=size-1;
    while(s<e){
        int temp;
        temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++;
        e--;
    }
}
int main(){
    int arr[6]={2,5,1,8,9,0};
    swap(arr,6);
    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;
}