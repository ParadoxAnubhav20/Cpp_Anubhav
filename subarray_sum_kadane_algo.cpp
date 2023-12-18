#include<iostream>
using namespace std;
int subarray_sum(int *arr,int n){
    int cs=0,ms=0;
    for(int i=0;i<n;i++){
        cs+=arr[i];
        if(cs<0){
            cs=0;
        }
        ms=max(cs,ms);
    }
    return ms;
}
int main(){
    int a[6]={-1,8,-4,-7,8,10};
    cout<<subarray_sum(a,6)<<"\n";
    return 0;
}