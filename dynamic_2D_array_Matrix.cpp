#include<iostream>
using namespace std;
int** create2DArray(int rows,int cols){
    int **arr=new int* [rows];
    //allocates memeory for each row
    for(int i=0;i<rows;i++){
        arr[i]=new int[cols];
    }
    //init the array with increasing list of nos
    int value=1;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            arr[i][j]=value;
            value++;
        }
     
    }
    return arr;
}
int main(){
    int r,c;
    cout<<"Enter rows and columns:\n";
    cin>>r>>c;
    int** mat=create2DArray(r,c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}