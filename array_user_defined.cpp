#include<iostream>
using namespace std;
void printarr(int arr[5]){
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the size of Array1:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printarr(arr);
    return 0;
}