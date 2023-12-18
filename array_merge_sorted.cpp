#include<iostream>
using namespace std;
int main(){
    int arr[]={3,5,7,9,12,15};
    int brr[]={1,2,3,7,8,11,14};
    int m=6,n=7;
    int result[m+n];
    int i=0,j=0;//will help us to iterate on arr & brr
    int k=0; //will help us to iterate on result
    while(i<m && j<n){
        //both i and j should be within the limits of arr & brr
        if(arr[i]<brr[j]){
        result[k]=arr[i];
        k++;
        i++;
    }
        else{
        result[k]=brr[j];
        k++;
        j++;
    }
    }
    while(i<m){
        //brr was exhausted and still got elements left in arr
        result[k]=arr[i];
        i++;
        k++;
    }
    while(j<n){
        //arr was exhausted and still got elements left in brr
        result[k]=brr[j];
        j++;
        k++;
    }
    //display result
    cout<<"Sorted Array:";
    for(int i=0;i<m+n;i++){
        cout<<result[i]<<" ";
    }
    return 0;
}