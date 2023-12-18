#include<iostream>
using namespace std;
int powerof(int power){
    if(power==0){
        return 1;
    }
    return 2*powerof(power-1);
}
int main(){
    int i=7;
    cout<<powerof(i);
}