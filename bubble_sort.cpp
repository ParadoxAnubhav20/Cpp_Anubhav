#include<bits/stdc++.h>
using namespace std;
void BubbleSort(vector<int> &arr){
    int size=arr.size();
    //bubble sort logic if previous element bigger than later then swap
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
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
    BubbleSort(v);
    cout<<"Sorted Array is:";
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}