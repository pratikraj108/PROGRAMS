//overload pre increment and post increment operator using friend function
#include<iostream>
using namespace std;
class complex{
    int real,img;
    public:
    void input();
    void display();
    friend void operator ++(complex &);
    friend complex operator ++(complex &,int);
};
void complex :: input(){
    cout<<"Enter value of real & img:\n";
    cin>>real>>img;
}
void complex:: display(){
    cout<<"\n";
    cout<<real<<"+i"<<img;
}
void operator++ (complex &c){
    c.real=++c.real;
    c.img=++c.img;
}
complex operator++ (complex &c,int n){
    complex z;
    z.real=c.real++;
    z.img=c.img++;
    return z;
}
int main(){
    complex c1,c2;
    c1.input();
    c1.display();
    ++c1;
    c1.display();
    c2=c1++;
    c1.display();
    c2.display();
}