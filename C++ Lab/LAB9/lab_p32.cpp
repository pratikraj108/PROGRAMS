// WAP to overload stream operator:
#include <iostream>
using namespace std;
class complex
{
    int real, img;

public:
    friend void operator>>(istream &, complex &);
    friend void operator<<(ostream &, complex &);
    complex operator+(complex &);
};
void operator>>(istream &mycin, complex &c)
{
    mycin >> c.real;
    mycin >> c.img;
}
void operator<<(ostream &mycout, complex &c)
{
    mycout << "Complex no. is:";
    mycout << c.real << "+i" << c.img;
    cout << endl;
}
complex complex::operator+(complex &c)
{
    complex z;
    z.real = real + c.real;
    z.img = img + c.img;
    return z;
}
int main()
{
    complex c1, c2, c3;
    cout << "Enter 2 complex no.:\n";
    cin >> c1;
    cin >> c2;
    c3 = c1 + c2;
    cout << c1;
    cout << c2;
    cout << c3;
}
