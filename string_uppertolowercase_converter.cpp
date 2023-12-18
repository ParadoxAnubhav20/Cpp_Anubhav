#include<iostream>
#include<string>
using namespace std;
char ltoc(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        //subtracts ASCII value of A and adds ASCII value of a
        char temp=ch-'A'+'a';
        return temp;
    }
}
int main(){
    cout<<ltoc('Q');
}