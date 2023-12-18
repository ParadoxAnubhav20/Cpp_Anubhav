#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter Rows and Columns:";
    cin>>r>>c;
    int mat[r][c];
    cout<<"Enter the matrix:\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>mat[i][j];
        }
    }
    cout<<"The Matrix is:\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<mat[i][j]<<"    ";
        }
        cout<<"\n";
    }
    return 0;
}