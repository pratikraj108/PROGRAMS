/* WAP to implement concept of friend function fro complex number
- an external fxn friend to a class */

#include<iostream>
using namespace std;
class complex
{
private:
    int real,img;
public:
void input();
void display();
friend complex add (complex &, complex &);
};
void complex::input (){
    cout<<"Enter complex no:\n";
    cin>>real>>img;
}
void complex::display(){
    cout<<"\nComplex no is\n";
    cout<<real<<"+i"<<img;
}
complex add (complex & x, complex & y){
    complex z; 
    z.real=x.real+y.real;
    z.img = x.img+y.img;
    return z;
}
main(){
    complex c1,c2,c3;
    c1.input();
    c2.input();
    c3=add(c1,c2);
    c1.display();
    c2.display();
    c3.display();
}
