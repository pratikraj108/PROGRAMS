// WAP to implement function overloading with function template
#include <iostream>
using namespace std;
void display(int x)
{
    cout << "\n Regular function";
    cout<<"\n The value of x is: " << x << endl;
}
template <class T>
void display(T x)
{
    cout << "\n Template function";
    cout<<"\n The value of x is: " << x << endl;
}
main(){
    display(10);
    display(20.5);
    display('A');
    return 0;
}