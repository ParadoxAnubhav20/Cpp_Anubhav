#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& arr, int low, int mid, int high) {
    int l = low;
    int r = mid + 1;
    vector<int> temp;
    
    while (l <= mid && r <= high) {
        if (arr[l] <= arr[r]) {
            temp.push_back(arr[l++]);
        } else {
            temp.push_back(arr[r++]);
        }
    }
    
    while (l <= mid) {
        temp.push_back(arr[l++]);
    }
    
    while (r <= high) {
        temp.push_back(arr[r++]);
    }
    
    for (int i = 0; i < temp.size(); i++) {
        arr[i + low] = temp[i];
    }
}

void mergeSort(vector<int>& arr,int low,int high){
    if(low>=high) return;
    int mid=(low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main(){
    vector<int> arr={3,8,1,0,9,2,7,4};
    mergeSort(arr,0,arr.size()-1);
    for(int i:arr){
        cout<<i<<" ";
    }cout<<"\n";
    return 0;
}