#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char sentence[1000];
    char temp=cin.get();
    int l=0;
    while(temp!='#'){
    sentence[l++]=temp;
    //update value of temp by reading next character
    temp=cin.get();
    }
    temp='\0';
    cout<<"Length:"<<l<<"\n";
    cout<<sentence;
    return 0;
}