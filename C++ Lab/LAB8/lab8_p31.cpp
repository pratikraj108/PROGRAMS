// WAP to overload * operator in the following form
// c3=10*c1;     c4=c1/c2;
#include <iostream>
using namespace std;
class complex
{
    int real, img;

public:
    void input();
    void displayMul();
    void displayDiv();
    friend complex operator*(int, complex &);
    friend complex operator/(complex &, complex &);
};
void complex::input()
{
    cout << "Enter real and imaginary part:";
    cin >> real >> img;
}
void complex::displayMul()
{
    cout << endl;
    cout << "The multiplication is:" << real << "+i" << img << endl;
}
void complex::displayDiv()
{
    cout << "\nThe division is:\n";
    cout << real << "+i" << img << endl;
}
complex operator*(int x, complex &y)
{
    complex z;
    z.real = x * y.real - y.img;
    z.img = x * y.img + y.real;
    return z;
}
complex operator/(complex &x, complex &y)
{
    complex a;
    a.real = ((x.real * y.real) + (x.img * y.img)) / ((y.real * y.real) + (y.img * y.img));
    a.img = ((x.img * y.real) - (x.real * y.img)) / ((y.real * y.real) + (y.img * y.img));
    return a;
}
main()
{
    complex c1, c2, c3, c4;
    c1.input();
    c2.input();
    c3 = 10 * c1;
    c4 = c1 / c2;
    c3.displayMul();
    c4.displayDiv();
}