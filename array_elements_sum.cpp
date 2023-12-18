#include<iostream>
int main(){
int arr[]={23,56,89,57};
    int sum=0;
    int size=(sizeof(arr)/sizeof(arr[0]));
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    std::cout<<sum;
    return 0;
}