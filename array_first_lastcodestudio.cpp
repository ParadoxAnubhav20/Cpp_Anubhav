#include <bits/stdc++.h> 
using namespace std;
int firstocc(vector<int>& arr,int size,int key){
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
int Lastocc(vector<int>& arr,int size,int key){
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
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
   // Write your code here
   pair<int,int> p;
   p.first=firstocc(arr,n,k);
   p.second=Lastocc(arr,n,k);
   return p;
}