// WAP TO MULTIPLY TWO MATRICES (DYNAMIC CREATION) USING MATRIX CLASS.
#include <iostream>
using namespace std;
class matrix
{
    int r, c;
    int **mat;

public:
    void allocate();
    void input();
    void display();
    void mul(matrix, matrix);
};
void matrix::allocate()
{
    mat = new int *[r];
    for (int i = 0; i < r; i++)
    {
        mat[i] = new int[c];
    }
}
void matrix::input()
{
    cout << "Enetr order of matrix r,c\n";
    cin >> r >> c;
    allocate();
    cout << "Enter array elements\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> mat[i][j];
        }
    }
}
void matrix::display()
{
    cout << "\nMatrix is\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
}
void matrix::mul(matrix A, matrix B)
{
    if (A.c == B.r)
    {
        r = A.r;
        c = B.c;
        allocate();
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                mat[i][j] = 0;
                for (int k = 0; k < A.c; k++)
                {
                    mat[i][j] += A.mat[i][k] * B.mat[k][j];
                }
            }
        }
    }
}
int main() {
    matrix m1, m2, output;
    m1.input();
    m2.input();
    m1.display();
    m2.display();

    output.mul(m1, m2);
    cout << "\nMultiplication of matrices:\n";
    output.display();
 
    return 0;
}
