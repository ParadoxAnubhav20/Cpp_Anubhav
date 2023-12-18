#include<iostream>
#include<vector>
using namespace std;
// Function to print all subsequences of an array
void printF(int idx, vector<int>& d, int arr[], int n){
    // Base case: If we have processed all elements in the array
    if(idx == n){
        // Print the subsequence
        for(auto i : d){
            cout << i << " ";
        }if(d.empty()){
            cout<<"{}";
        }
        cout << "\n";
        return;
    }
    // Take or pick the particular element into the subsequence
    d.push_back(arr[idx]);
    printF(idx + 1, d, arr, n); // Recursively process the next element
    d.pop_back(); // Backtrack by removing the previously picked element
    // Do not pick the particular element into the subsequence
    printF(idx + 1, d, arr, n); // Recursively process the next element
}
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vector<int> d; // Vector to store the current subsequence
    cout << "All subsequences are:\n";
    printF(0, d, arr, n); // Call the function to print all subsequences
    return 0;
}
