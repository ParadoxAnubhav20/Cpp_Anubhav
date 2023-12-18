#include<iostream>
using namespace std;
int main(){
    int val1=5;
    const int val2=10;
    cout<<"The Values are:"<<val1<<" "<<val2<<endl;
    //val2=15;
    val1=20;
    cout<<"The Values are:"<<val1<<" "<<val2<<endl;
    return 0;
}