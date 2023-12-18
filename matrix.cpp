#include <iostream>
using namespace std;
class Matrix {
private:
    int** mat;
    int row, col;
public:
    Matrix(int r, int c) {
        row = r;
        col = c;
        mat = new int*[r];
        for (int i = 0; i < r; i++) {
            mat[i] = new int[c];
        }
    }
    void input() {
        cout << "Enter the matrix elements:\n";
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cin >> mat[i][j];
            }
        }
    }
    void output() {
        cout << "The Matrix elements are:\n";
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cout << mat[i][j] << " ";
            }
            cout << "\n";
        }
    }
    Matrix add(Matrix& m1) {
        Matrix temp(row, col);
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                temp.mat[i][j] = mat[i][j] + m1.mat[i][j];
            }
        }
        return temp;
    }
    Matrix subtract(Matrix& m1) {
        Matrix temp(row, col);
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                temp.mat[i][j] = mat[i][j] - m1.mat[i][j];
            }
        }
        return temp;
    }
    Matrix multiply(Matrix& m1) {
        Matrix temp(row, m1.col);
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < m1.col; j++) {
                temp.mat[i][j] = 0;
                for (int k = 0; k < col; k++) {
                    temp.mat[i][j] += mat[i][k] * m1.mat[k][j];
                }
            }
        }
        return temp;
    }
};
int main() {
    Matrix m1(3, 3), m2(3, 3), m3(3, 3);
    m1.input();
    m2.input();
    cout << "Matrix m1:\n";
    m1.output();
    cout << "Matrix m2:\n";
    m2.output();
    m3 = m1.add(m2);
    cout << "Addition of m1 and m2:\n";
    m3.output();
    m3 = m1.subtract(m2);
    cout << "Subtraction of m1 and m2:\n";
    m3.output();
    m3 = m1.multiply(m2);
    cout << "Multiplication of m1 and m2:\n";
    m3.output();
    return 0;
}
