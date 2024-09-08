// to explain static data member and static member fxn.
#include<iostream>
using namespace std;

class sample{
    int x;
    static int y;
    public:
    void set_x();
    void show_x();
    static void  show_y();
};
int sample :: y=10;
void sample :: set_x(){
    x= ++y;
}
void sample :: show_x(){
    cout<<"x="<<x<<endl;
}
void sample :: show_y(){
    cout<<"y="<<y<<endl;
}
int main(){
    sample s1,s2;
    s1.set_x();
    s1.show_x();
    s1.show_y();
    s2.set_x();
    s2.show_x();
    s2.show_y();
    return 0;
}


