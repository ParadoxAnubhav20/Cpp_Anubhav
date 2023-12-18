#include<iostream>
#include<limits.h>
using namespace std;
int secondLargestElement(int arr[],int size){
    int max=INT_MIN;
    int second_max=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<size;i++){
        if(arr[i]>second_max && second_max<max){
            second_max=arr[i];
        }
    }
    return second_max;
}
int main(){
    int arr[]={3,5,8,7,9,8,9};
    cout<<secondLargestElement(arr,7);
    return 0;
}