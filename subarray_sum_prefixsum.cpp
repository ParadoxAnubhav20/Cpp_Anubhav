#include<iostream>
using namespace std;
int subarray_sum(int *arr,int size){
    int prefix[100]={0};
    prefix[0]=arr[0];
    for(int i=0;i<size;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    int largest_sum=0;
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++)
        {
            int subarray_sum=i>0? prefix[j]-prefix[i-1]:prefix[j];
            //checking which is greater
            largest_sum=max(largest_sum,subarray_sum);
        }
    }
    return largest_sum;
}
int main(){
    int arr[9]={2,-2,1,-7,-4,5,-1,12,13};
    cout<<"Largest Subarray sum:"<<subarray_sum(arr,9);
    return 0;
}