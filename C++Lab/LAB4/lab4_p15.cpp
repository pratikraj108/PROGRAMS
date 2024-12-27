#include<iostream>
using namespace std;
class FxnCalling{
    public:
    void swapV(int,int);
    void swapP(int*,int*);
    void swapR(int&,int&);
};
void FxnCalling::swapV(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void FxnCalling::swapP(int *p1,int*p2){
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}
void FxnCalling::swapR(int &r1,int&r2){
    int temp;
    temp=r1;
    r1=r2;
    r2=temp;
}
int main(){
    FxnCalling f1;
    int x,y;
    cout<<"Enter x,y:\n";
    cin>>x>>y;
    cout<<"value of x,y before swapping:";
    cout<<"\nx="<<x;
    cout<<"\ny="<<y;

    f1.swapV(x,y);
    cout<<" \nvalue of x,y after call by value:";
    cout<<"\nx="<<x;
    cout<<"\ny="<<y;

    f1.swapP(&x,&y);
    cout<<"\nValue  of x,y after call by pointer:";
    cout<<"\nx="<<x;
    cout<<"\ny="<<y;

    f1.swapR(x,y);
    cout<<"\nValue of x,y after call by reference:";
    cout<<"\nx="<<x;
    cout<<"\ny="<<y;

    return 0;
}
