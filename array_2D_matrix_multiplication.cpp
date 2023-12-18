#include <iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the number of rows=";
    cin>>m;
    cout<<"enter the number of columns=";
    cin>>n;
    int arr1[m][n],arr2[m][n],ans[m][n],i,j,k;
    cout<<"enter the first matrix elements=\n";
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        {
            cin>>arr1[i][j];
        }
    }
    cout<<"enter the second matrix elements=\n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr2[i][j];
        }
    }
    cout<<"multiplication of the matrices=\n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            ans[i][j]=0;
            for(k=0;k<n;k++)
            {
                ans[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    //for printing result
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
