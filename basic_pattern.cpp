#include<iostream>
using namespace std;
void print(int n){
    int val=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<val++<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    print(n);
    return 0;
}