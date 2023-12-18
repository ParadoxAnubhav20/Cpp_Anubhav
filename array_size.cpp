#include<iostream>
int main(){
    int arr[4]={1,4,7,8};
    std::cout<<"Size:"<<sizeof(arr)<<"\n";
    std::cout<<"Length:"<<(sizeof(arr)/sizeof(arr[0]));
    return 0;
}