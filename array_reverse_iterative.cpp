#include<iostream>
using namespace std;
void reverse_array(int *arr,int size){
    int i=0;
    int e=size-1,temp=0;
   while(i<e){
        temp=arr[i];
        arr[i]=arr[e];
        arr[e]=temp;
        i++;
        e--;
}
}
int main(){
    int brr[5]={2,4,1,7,8};
    reverse_array(brr,5);
    for(int i=0;i<5;i++){
        cout<<brr[i]<<",";
    }
    return 0;
}