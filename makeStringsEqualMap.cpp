#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;
bool canMakeEqual(vector<string> &v){
    unordered_map<char,int> freq;
    // Count the frequency of each character in the strings
    for(auto str:v){
        for(char c:str){
            freq[c]++;
        }
    }
    int size=v.size();
    // Check if the frequency of each character is divisible by the number of strings
    for(auto count:freq){
        if(count.second % size != 0){
            return false;
        }
    }   
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<string> vs(n); // Initialize vector with size n to store the strings
    // Input the strings
    for(int i=0;i<n;i++){
        cin>>vs[i];
    }
    // Check if it is possible to make all strings equal
    cout<<(canMakeEqual(vs) ? "Yes" : "No")<<endl;    
    return 0;
}
