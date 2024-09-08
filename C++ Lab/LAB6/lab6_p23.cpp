//WAP to count no. of object created and destroyed (static,constructor ,destructor)
#include<iostream>
using namespace std;
class complex{
    static int c;
    public:
           complex(){
            c++;
            cout<<"\n Object Created:"<<c;
           }
           ~complex(){
            cout<<"\nObject destroyed\n"<<c;
            --c;
           }
};
int complex::c;
main(){
    complex c1,c2;
    {
    complex c3,c4;
    }
    complex c5;
}