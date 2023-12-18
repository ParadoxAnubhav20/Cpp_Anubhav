#include<iostream>
using namespace std;
int main(){
    int i=11;
    while(true){
        if(i%13==0){
            cout<<i<<endl;
            break;
        }
        i+=11;
    }
    return 0;
}