#include<bits/stdc++.h>
using namespace std;
void SortZeroes(vector<int> &arr){
    int size=arr.size();
    //swap zeroes and non zeroes
    for(int i=size-1;i>=0;i--){
      int j=0;
      bool flag=false;
      while(j!=i){
        if(arr[j]==0 && arr[j+1]!=0){
            //condition to swap zero and non zero
            swap(arr[j],arr[j+1]);
            flag=true;
        }
        j++;
      }
      if(!flag)
        break;
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