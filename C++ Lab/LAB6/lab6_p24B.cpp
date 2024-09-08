/* WAP to implement concept of friend function fro complex number
- an external fxn friend to more than one class
- member fxn of a class friend to another class*/
#include <iostream>
using namespace std;
class complex2;
class complex1
{
private:
    int real, img;

public:
    void input();
    void display();
    friend complex1 add(complex1 &, complex2 &);
};
class complex2
{
    int real, img;

public:
    void input();
    void display();
    friend complex1 add(complex1 &, complex2 &);
};

void complex1::input()
{
    cout << "Enter complex no:\n";
    cin >> real >> img;
}
void complex1::display()
{
    cout << "\nComplex no is\n";
    cout << real << "+i" << img;
}
void complex2::input()
{
    cout << "Enter complex no:\n";
    cin >> real >> img;
}
void complex2::display()
{
    cout << "\nComplex no is\n";
    cout << real << "+i" << img;
}
complex1 add(complex1 &x, complex2 &y)
{
    complex1 z;
    z.real = x.real + y.real;
    z.img = x.img + y.img;
    return z;
}
main()
{
    complex1 c1,c3;
    complex2 c2;
    c1.input();
    c2.input();
    c3 = add(c1, c2);
    c1.display();
    c2.display();
    c3.display();
}
