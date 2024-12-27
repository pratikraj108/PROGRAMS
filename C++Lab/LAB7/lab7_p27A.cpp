//overload pre increment and post increment operator using memeber function
#include<iostream>
using namespace std;
class complex{
    int real,img;
    public:
    void input();
    void display();
    void operator ++();
    void operator ++(int);
};
void complex :: input(){
    cout<<"Enter value of real & img:";
    cin>>real>>img;
}
void complex:: display(){
    cout<<"\n";
    cout<<real<<"+i"<<img;
}
void complex :: operator++(){
    real=++real;
    img=++img;
}
void complex :: operator++(int n){
    real=real++;
    img=img++;
}
int main(){
    complex c1;
    c1.input();
    c1.display();
    ++c1;
    c1.display();
    c1++;
    c1.display();

}