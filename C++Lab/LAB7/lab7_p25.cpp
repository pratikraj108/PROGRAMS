// WAP to implement friend class for performing following operations on complex numbers.
//  addition, multiplication, division
#include<iostream>
using namespace std;
class complex2;
class complex1{
    int real,img;
    public:
    void input();
    void display();
    void add(complex1& ,complex2& );
    void mul(complex1 &, complex2 &);
    void div(complex1 &, complex2 &);
};
class complex2{
    int real, img;
    public:
    void input();
    void display();
    friend class complex1;
};
void complex1::input(){
    cout<<"Enter the real and imginary part:\n";
    cin>>real>>img;
}
void complex1 :: display(){
    cout<<"\nComplex number is:\n";
    cout<<real<<"+i"<<img;
}
void complex2::input(){
    cout<<"Enter the real and imginary part:\n";
    cin>>real>>img;
}
void complex2 :: display(){
    cout<<"\nComplex number is:\n";
    cout<<real<<"+i"<<img;
}
void complex1:: add(complex1& x,complex2& y){
    this->real=x.real+y.real;
    this->img=x.img+y.img;
}
void complex1:: mul(complex1& x,complex2& y){
    this->real=(x.real*y.real)-(x.img*y.img);
    this->img=(x.real*y.img)+(x.img*y.real);
}
void complex1:: div(complex1& x,complex2& y){
    this->real=((x.real*y.real)+(x.img*y.img))/((y.real*y.real)+(y.img*y.img));
    this->img=((x.img*y.real)-(x.real*y.img))/((y.real*y.real)+(y.img*y.img));
}

int main(){
    complex1 c1,c3;
    complex2 c2;
    c1.input();
    c2.input();
    c3.add(c1,c2);
    c1.display();
    c2.display();
    c3.display();
    c3.mul(c1,c2);
    c3.display();
    return 0;
}