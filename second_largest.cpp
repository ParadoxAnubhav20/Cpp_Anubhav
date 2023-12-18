#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int second_largest(vector<int> v){
    sort(v.begin(), v.end());
    int size = v.size();
    int second_largest = v[size-2]; // Initialize to second-to-last element
    for(int i = size - 1; i >= 0; i--){
        if(v[i] != v[size - 1]){
            second_largest = v[i];
            break;
        }
    }
    return second_largest;
}
int main(){
    vector<int> arr = {2, 6, 1, 0, 9, 8};
    cout << second_largest(arr) << endl; // should output 8
    return 0;
}



