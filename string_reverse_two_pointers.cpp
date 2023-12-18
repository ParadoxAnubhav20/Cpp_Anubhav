#include<iostream>
using namespace std;
string reverse(string& s1){
    int l=0,n=s1.length()-1;
    while(l<=n){
        swap(s1[l],s1[n]);
        l++;
        n--;
    }
    return s1;
}
int main(){
    string str="Python";
    cout<<"The Reversed String is:"<<reverse(str);
    return 0;
}
