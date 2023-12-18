#include <iostream>
using namespace std;
int main() {
    int r, c;
    cout << "Enter Rows and Columns:";
    cin >> r >> c;
    // Create a 2D array using dynamic memory allocation
    int** mat = new int*[r];
    for (int i = 0; i < r; i++) {
        mat[i] = new int[c];
    }
    cout << "Enter the matrix:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> mat[i][j];
        }
    }
    cout << "The Matrix is:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << mat[i][j] << "    ";
        }
        cout << "\n";
    }
    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==j){
                sum+=mat[i][j];
            }
        }
    }
    cout<<"Sum:"<<sum<<"\n";
    // Free the dynamically allocated memory
    for (int i = 0; i < r; i++) {
        delete[] mat[i];
    }
    delete[] mat;
    return 0;
}