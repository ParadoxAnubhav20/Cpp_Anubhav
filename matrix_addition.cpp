#include <iostream>
using namespace std;
class Matrix {
private:
    int row, col;
    int **mat;
public:
    Matrix(int r, int c) {
        row = r;
        col = c;
        mat = new int *[r];
        for (int i = 0; i < r; i++) {
            mat[i] = new int[c];
        }
    }
    void input() {
        cout << "Enter the Matrix Elements:" << endl;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cin >> mat[i][j];
            }
        }
    }
    void display() {
        cout << "The Matrix Elements Are:" << endl;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
    Matrix add(Matrix m2) {
        Matrix result(row, col);
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                result.mat[i][j] = mat[i][j] + m2.mat[i][j];
            }
        }
        return result;
    }
};
int main() {
    Matrix m1(3, 3);
    m1.input();
    m1.display();
    Matrix m2(3, 3);
    m2.input();
    m2.display();
    Matrix m3 = m1.add(m2);
    m3.display();
    return 0;
}