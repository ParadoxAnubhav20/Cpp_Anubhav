#include<iostream>
using namespace std;
int largest(int *arr,int index,int size){
    //base case
    if(index==size-1)
    {
    return arr[index];
    }
    return max(arr[index],largest(arr,index+1,size));
}
int main(){
    int arr[6]={2,4,12,11,2,1};
    cout<<largest(arr,0,6);
    return 0;
}