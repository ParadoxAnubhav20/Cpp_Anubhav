#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s;
    string temp;
    vector<string> arr;
    int n=5;
    while(n--){
        getline(cin,temp);
        arr.push_back(temp);
    }
    for(string x:arr){
        cout<<x<<",";
    }
    return 0;
}
