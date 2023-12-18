#include<iostream>
using namespace std;
int searachIdx(int arr[], int size, int target){
    int s = 0;
    int e = size - 1;
    while (s <= e){
        int mid = (s + e) >> 1;
        if (arr[mid] == target){
            return mid;
        }
        else if (arr[mid] > target){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return -1;
}
int main(){
    int size;
    cout << "Enter the size of the elements: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
    int t;
    cout << "Enter the target: ";
    cin >> t;
    cout << "Target Index: " << searachIdx(arr, size, t) << endl;
    return 0;
}
