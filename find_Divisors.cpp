#include<iostream>
using namespace std;
void print_Dividors(int num){
    for(int i=1;i<=num;i++){
        if(num%i==0){
            cout<<i<<" ";
        }
    }
}
int main(){
    int num;
    cin>>num;
    print_Dividors(num);
    return 0;
}
