#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char sentence[1000];
    char temp=cin.get();
    int l=0;
    while(temp!='#'){
    l++;
    cout<<temp;
    //update value of temp by reading next character
    temp=cin.get();
    }
    cout<<"\n";
    cout<<"Length:"<<l<<"\n";
    return 0;
}