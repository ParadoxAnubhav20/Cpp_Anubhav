#include<bits/stdc++.h>
using namespace std;
void InsertionSort(vector<int> &arr){
    int size=arr.size();
   for(int i=1;i<size;i++){
    int current=arr[i];
    int j=i-1;
    // Move elements of arr[0..i-1],
	// that are greater than key, to one
	// position ahead of their
	// current position
    while(j>=0 && arr[j]>current){
        arr[j+1]=arr[j];
        j--;
    }
    //insert current element
    arr[j+1]=current;
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
    InsertionSort(v);
    cout<<"Sorted Array is:";
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}