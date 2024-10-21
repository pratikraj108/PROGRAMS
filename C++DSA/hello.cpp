#include <iostream>
#define PI 3.14
using namespace std;

class Circle{
    protected:
        double radius;
    public:
        Circle(double r) : radius(r) {}

        double Area();            // LINE-1
        void Print();             // LINE-2
};

double Circle::Area() { return PI * radius * radius; }
void Circle::Print() { cout << Area() << " "; }

class Cylinder: public Circle{
    double height;
    public:
        Cylinder(double r, double h) : Circle(r), height(h) {}
        double Area() { return 2 * PI * radius * radius * height; }
};

int main(){
    double r, h;
    cin >> r >> h;
    Circle c1(r);
    Cylinder c2(r, h);
    Circle *c[2] = {&c1, &c2};
    for(int i = 0; i < 2; i++)
        c[i]->Print();
		
    return 0;
}




/*  complex *c=new complex[2];
    c[0]=complex(2,3);
    c[1]=complex(4,5);
    complex c3;
    c3.mul(c[0],c[1]);
    c3.display();*/