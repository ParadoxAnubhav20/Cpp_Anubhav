#include<iostream>
using namespace std;
int sum_array(int *arr,int index,int size){
    if(index==size-1){
        //base case last element present sum is that element
        return arr[index];
    }
    return arr[index]+sum_array(arr,index+1,size);
}
int main(){
    int arr[6]={2,9,7,1,4,5};
    cout<<sum_array(arr,0,6);
    return 0;
}