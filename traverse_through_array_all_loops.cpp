#include<iostream>
int main(){
    int arr[]={1,4,7,8,9,0,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    //for loop
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
    //for each loop
    for(int ele:arr){
        std::cout<<ele;
    }
    int index=0;
    while(index<size){
        std::cout<<arr[index]<<"\n";
        index++;
    }
    return 0;
}