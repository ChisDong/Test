#include <iostream>
#include <cmath>
using namespace std;
struct Matrix
{
    int rows;
    int cols;
    int mat[100][100];
};

void Nhap(Matrix &);
void Xuat(Matrix &);
Matrix operator+(Matrix A, Matrix B)
{
    Matrix C;
    if (A.rows != B.rows || A.cols != B.cols)
    {
        cout << "Khong the thuc hien phep cong ";
        // Trả về một ma trận rỗng hoặc giá trị đặc biệt khác
        return C;
    }
    else
    {
        C.rows = A.rows;
        C.cols = A.cols;
        for (int i = 0; i < A.rows; i++)
        {
            for (int j = 0; j < A.cols; j++)
            {
                C.mat[i][j] = A.mat[i][j] + B.mat[i][j];
            }
        }
        return C;
    }
}
Matrix operator-(Matrix A, Matrix B)
{
    Matrix C;
    if (A.rows != B.rows || A.cols != B.cols)
    {
        cout << "Khong the thuc hien phep tru ";
        // Trả về một ma trận rỗng hoặc giá trị đặc biệt khác
        return C;
    }
    else
    {
        C.rows = A.rows;
        C.cols = A.cols;
        for (int i = 0; i < A.rows; i++)
        {
            for (int j = 0; j < A.cols; j++)
            {
                C.mat[i][j] = A.mat[i][j] - B.mat[i][j];
            }
        }
        return C;
    }
}
int main()
{
    Matrix a, b;
    Nhap(a);
    Nhap(b);
    cout << "Ma tran a + b = ";
    Xuat(a + b);
    cout << "Ma tran a - b = ";
    Xuat(a - b);
    return 0;
}

void Nhap(Matrix &A)
{
    cout << "Nhap so dong cua ma tran: ";
    cin >> A.rows;
    cout << "Nhap so cot cua ma tran: ";
    cin >> A.cols;
    cout << "Nhap vao ma tran " << endl;
    for (int i = 0; i < A.rows; i++)
    {
        for (int j = 0; j < A.cols; j++)
        {
            cin >> A.mat[i][j];
        }
    }
}
void Xuat(Matrix &C)
{
    for (int i = 0; i < C.rows; i++)
    {
        for (int j = 0; j < C.cols; j++)
        {
            cout << C.mat[i][j] << " ";
        }
        cout << endl;
    }
}
