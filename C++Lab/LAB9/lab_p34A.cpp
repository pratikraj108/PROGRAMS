// WAP to implement single inheritance in  ---- public mode
#include<iostream>
using namespace std;
class Base
{
private:
    int a;
protected: 
    int b;    
public:
    int c;
    void input();
    void show();
    int get_a();
};
class Derived : public Base{
    int d;
    public:
        void add();
        void dispaly();
};
void Base::input(){
    cout<<"\nEnter a,b,c\n";
    cin>>a>>b>>c;
}
void Base::show(){
    cout<<"\na="<<a;
    cout<<"\nb="<<b;
    cout<<"\nc="<<c;
}
int Base::get_a(){
    return a;
}
void Derived::add(){
    d=get_a()+b+c;
}
void Derived :: dispaly(){
    cout<<"\nd="<<d;
}
main(){
    Derived d1;
    d1.input();
    d1.add();
    d1.show();
    d1.dispaly();
}
