//Define a class complex to represent a complex number, create an array of object of size 2 using new operator 
//define a member function to multiply these 2 objects by passing them as argument in the function.
#include<iostream>
using namespace std;
class complex
{
    int real;
    int img;
    public:
    complex();
    complex(int r,int i);
    void mul(complex c1,complex c2);
    void display();
};
 complex::complex (){
    real=0;
    img=0;
}
 complex::complex(int r,int i){
    real=r;
    img=i;
}
void complex::display(){
    cout<<"The multiplication is:"<<real<<"+i"<<img<<endl;
}
void complex::mul(complex x,complex y)
{
    real=x.real*y.real-x.img*y.img;
    img=x.real*y.img+x.img*y.real;
}
int main()
{
complex *c=new complex[2];
    c[0]=complex(2,3);
    c[1]=complex(4,5);
    complex c1;
    c1.mul(c[0],c[1]);
    c1.display();
    return 0;
}




