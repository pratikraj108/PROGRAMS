//WAP to implement class template with multiple parameter.
#include<iostream>
using namespace std;
template<class T1,class T2>
class Test
{
    T1 a;
    T2 b;
    public:
    Test(T1 x,T2 y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;
    }
};
int main()
{
    Test<int,float> o1(10,20.5);
    o1.display();
    Test<float,char> o2(10.5,'A');
    o2.display();
    return 0;
}