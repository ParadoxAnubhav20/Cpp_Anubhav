#include<bits/stdc++.h>
using namespace std;
void SelectionSort(vector<int> &arr){
    int size=arr.size();
   for(int i=0;i<size-1;i++){
    //finds the min element in unsorted array
        int min_idx=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
         // Swaps the found minimum element with the current element 
            if(i!=min_idx){
                swap(arr[i],arr[min_idx]);
            }
    }
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
    SelectionSort(v);
    cout<<"Sorted Array is:";
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}