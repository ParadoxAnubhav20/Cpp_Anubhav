#include<bits/stdc++.h>
using namespace std;
void SortZeroes(vector<int> &arr){
    int size=arr.size();
    int left=0,right=size-1;
    while (left < right){
        if(arr[left]!=0){
            left++;
        }
        else if(arr[right]==0){
            right--;
        }
        else{
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
    return;
}
int main(){
    int size;
    cout<<"Enter the size of the Array:";
    cin>>size;
    vector<int> v(size);
    cout<<"Enter the elements:";
    for(int i=0;i<size;i++){
        cin>>v[i];
    }
    SortZeroes(v);
    cout<<"Sorted Array is:";
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}