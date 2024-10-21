//WAP to overload Binary + operator using   - member function
#include<iostream>
using namespace std;
class complex{
    int real,img;
    public:
    void input();
    void display();
    complex operator +(complex &c);
};
void complex::input(){
    cout<<"Enter real and imaginary part:";
    cin>>real>>img;
}
void complex::display(){
    cout<<endl;
    cout<<real<<"+i"<<img;
}
complex complex::operator +(complex &c){
    complex z;
    z.real=real+c.real;
    z.img=this->img+c.img;
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