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
    int arr[]={1,3,4,4,4,4,4,5,6};
    int firstIndex=firstocc(arr,9,4);
    int lastIndex=Lastocc(arr,9,4);
    cout<<"No of Occurence:"<<lastIndex-firstIndex+1<<endl;
    return 0;
}