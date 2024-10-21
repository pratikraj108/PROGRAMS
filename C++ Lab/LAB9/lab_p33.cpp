//WAP to compare 2 matrix using == operator overloading (memory allocation is dynamically)

#include <iostream>
using namespace std;

class matrix {
    int **a;
    int r, c;

public:
    matrix(int r, int c) {
        this->r = r;  
        this->c = c;
        a = new int *[r];
        for (int i = 0; i < r; i++) {
            a[i] = new int[c];
        }
    }

    ~matrix() {
        for (int i = 0; i < r; i++) {
            delete[] a[i];
        }
        delete[] a;
    }

    void input();
    void display();
    bool operator==(matrix &m);
};

void matrix::input() {
    cout << "Enter the elements of matrix:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }
}

void matrix::display() {
    cout << "Matrix is:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

bool matrix::operator==(matrix &m) {
    if (r != m.r || c != m.c) {
        return false;
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (a[i][j] != m.a[i][j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int r, c;
    cout << "Enter the no. of rows and cols:\n";
    cin >> r >> c;

    matrix m1(r, c), m2(r, c);

    m1.input();
    m2.input();

    m1.display();
    m2.display();

    if (m1 == m2) {
        cout << "Matrices are equal\n";
    } else {
        cout << "Matrices are not equal\n";
    }

    return 0;
}
