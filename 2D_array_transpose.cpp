#include<iostream>
using namespace std;
int main(){
    int rows,columns;
    cout<<"Enter rows and columns:";
    cin>>rows>>columns;
    int arr[rows][columns];
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The Transposed Matrix is:"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
        return 0;
}