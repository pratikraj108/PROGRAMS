//WAP to implement Multiple Inherittence:
#include<iostream>
using namespace std;
class Academic{
    protected: int a;
    public:
        void get_a();
        void show_a();
};
class Extra_curricular{
    protected: int s;
    public:
      void get_s();
      void show_s();
};
class Performance:public Academic,public Extra_curricular{
    int P;
    public:
       void compute_score();
       void display();
};
void Academic::get_a(){
    cout<<"Enter Average academic performance:";
    cin>>a;
}
void Academic::show_a(){
    cout<<"\na="<<a;
}
void Extra_curricular ::get_s(){
    cout<<"Enter Score for Eca:";
    cin>>s;
}
void Extra_curricular:: show_s(){
    cout<<"\ns="<<s;
}
void Performance::compute_score(){
    P=(a+s)/2;
}
void Performance::display(){
    cout<<"\nFinal score="<<P;
}
main(){
    Performance p1;
    p1.get_a();
    p1.get_s();
    p1.compute_score();
    p1.show_a();
    p1.show_s();
    p1.display();
}