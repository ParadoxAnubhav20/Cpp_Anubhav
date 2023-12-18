#include<iostream>
using namespace std;
void swapalt(int arr[], int n) {
    for(int i=0;i<n;i+=2)
    {
        if(i+1<n){
        swap(arr[i],arr[i+1]);
    }
    }
}
void printArray(int arr[], int n) {
     for(int i=0; i<n; i++) {
        cout<<arr[i]<< " ";
    }
    cout << endl;
}
int main() {
    int arr[6] = {1,4,0,5,-2,15};
    int brr[5] = {2,6,3,9,4};
    swapalt(arr, 6);
    swapalt(brr, 5);
    printArray(arr, 6);
    printArray(brr, 5);
    return 0;
}