// WAP to implement function template with multiple parameter.

#include <iostream>
using namespace std;
template<class T1,class T2>
void display(T1 x,T2 y)
{
    cout<<"The value of x is: "<<x<<endl;
    cout<<"The value of y is: "<<y<<endl;
}
main(){
    display(10,20.5);
    display('A',10.5);
    display(10,'B');
    display(1,3);
    return 0;
}