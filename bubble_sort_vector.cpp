#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void bubbleSort(vector<int> &arr){
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr.size() - i - 1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
void displayArray(const vector<int>& arr){
    cout << "Array Elements are: ";
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i];
        if (i < arr.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;
}
int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    if (size <= 0) {
        cout << "Invalid array size. Please enter a positive integer." << endl;
        return 1; // Exit with an error code
    }
    vector<int> v;
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    displayArray(v);
    bubbleSort(v);
    displayArray(v);
    return 0;
}
