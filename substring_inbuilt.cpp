#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="Batman";
    string r=s.substr(3,3);
    cout<<r<<"\n";
    r.push_back('t');
    cout<<r<<"\n";
    //removes the last element
    r.pop_back();
    cout<<r<<"\n";
    return 0;
}