#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str[101]; // add extra character for null character
    cout<<"Enter the string to be reversed:";
    cin>>str;
    int size=strlen(str); // get size of string without null character
    for(int i=0;i<size/2;i++){
        char temp=str[i];
        str[i]=str[size-i-1];
        str[size-i-1]=temp;
    }
    cout<<str;
    return 0;
}
