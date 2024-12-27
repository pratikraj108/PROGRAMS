// define a class complex to represent complex numbers, initialize them using default constructor, parameterized constructor and construction overloading. Also, include a function to add two comlex numbers.
#include <iostream>
using namespace std;

class complex
{
    int real, img;

public:
    complex();
    complex(int r, int i);
    complex(complex &c);
    void add(complex c1, complex c2);
    void display();
    void input();
    void SumDisplay();
};

void complex ::input()
{
    cout << "Enter the real and imaginary part of complex number:" << endl;
    cin >> real >> img;
}

void complex ::display()
{
    cout << "The complex number is: " << real << " + " << img << "i" << endl;
}
void complex ::SumDisplay()
{
    cout << "The sum of complex numbers is: " << real << " + " << img << "i" << endl;
}

complex ::complex()
{
    real = 10;
    img = 5;
}

complex ::complex(int r, int i)
{
    real = r;
    img = i;
}

complex ::complex(complex &c)
{
    real = c.real;
    img = c.img;
}

void complex ::add(complex c1, complex c2)
{
    real = c1.real + c2.real;
    img = c1.img + c2.img;
}

int main()
{
    complex c1, c2, c3, c4(5, 6), c5(c4);
    c1.input();
    c2.input();
    c1.display();
    c2.display();
    c3.add(c1, c2);
    c3.SumDisplay();
    c4.display();
    c5.display();
    return 0;
}