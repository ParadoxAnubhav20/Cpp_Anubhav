#include<iostream>
using namespace std;
int firstocc(int arr[],int size,int key){
    int start=0,end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
        ans=mid;
        end=mid-1;
    }
    else if(key>arr[mid]){
        start=mid+1;
    }
    else if(key<arr[mid]){
        end=mid-1;
    }
    mid=start+(end-start)/2;
}
return ans;
}
int Lastocc(int arr[],int size,int key){
    int start=0,end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
        ans=mid;
        start=mid+1;
    }
    else if(key>arr[mid]){
        start=mid+1;
    }
    else if(key<arr[mid]){
        end=mid-1;
    }
    mid=start+(end-start)/2;
}
return ans;
}
int main(){
    int arr[6]={1,3,4,4,5,6};
    cout<<"Index:"<<firstocc(arr,6,4)<<endl;
    cout<<"Index:"<<Lastocc(arr,6,4)<<endl;
    return 0;
}