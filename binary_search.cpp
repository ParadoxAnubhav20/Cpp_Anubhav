#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){
    int start=0,end=size-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if((arr[mid])==key){
            return mid;
        }
        else if((arr[mid])>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main(){
    int arr1[7]={3,5,7,8,9,11,12};
    int index=binarySearch(arr1,7,11);
    cout<<"Present at:"<<index;
    return 0;
}