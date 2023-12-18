#include<iostream>
#include<limits.h>
using namespace std;
int largestElementIndex(int arr[],int size){
    int max=INT_MIN; //is a macro,include header limits.h 
    int maxindex=-1; 
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
            maxindex=i;
        }
    }
    return maxindex;
}
int main(){
    int arr[]={3,5,9,23,8,23,21};
    int indexofLargest=largestElementIndex(arr,7);
    cout<<"Largest Element:"<<arr[indexofLargest]<<endl;
    int largestElement=arr[indexofLargest];
    for(int i=0;i<7;i++){
        if(arr[i]==largestElement){
            arr[i]=-1;
        }
    }
    //arr[indexofLargest]=-1; //now largest element=-1,so we can find 2nd largest
    int indexofsecondLargest=largestElementIndex(arr,7);
    cout<<"Second Largest Element:"<<arr[indexofsecondLargest];
    return 0;
}