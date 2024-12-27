//WAP to overload Binary + operator using   - friend function
#include<iostream>
using namespace std;
class complex{
    int real,img;
    public:
    void input();
    void display();
    friend complex operator +(complex &,complex &);
};
void complex::input(){
    cout<<"Enter real and imaginary part:";
    cin>>real>>img;
}
void complex::display(){
    cout<<endl;
    cout<<real<<"+i"<<img;
}
complex operator +(complex &x,complex &y){
    complex z;
    z.real=x.real+y.real;
    z.img=x.img+y.img;
    return z;
}
main(){
    complex c1,c2,c3;
    c1.input();
    c2.input();
    c3=c1+c2;
    c1.display();
    c2.display();
    c3.display();
}