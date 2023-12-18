#include<iostream>
using namespace std;
int subarray_sum(int *arr,int size){
    int largest_sum=0;
    //O(n^3)
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++)
        {
            int subarray_sum=0;
            for(int k=i;k<=j;k++){
                subarray_sum+=arr[k];
            }
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