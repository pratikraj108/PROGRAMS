//WAP to implement Multilevel Inheritance
#include <iostream>
using namespace std;
class student{
    protected: 
        string name;
        string roll_no;
    public:
        void get_details();
        void show_details();    
};
class Academic:public student{
    protected:
        double m1,m2;
    public:
        void get_marks();
        void show_marks();    
};
class Result:public Academic{
    double avg_score;
    public:
        void compute_avg();
        void display();
};
void student :: get_details(){
    cout<<"Enter name of student:"<<endl;
    cin>>name;
    cout<<"Enter the roll_no.:"<<endl;
    cin>>roll_no;
}
void student :: show_details(){
    cout<<"name:"<<name<<endl;
    cout<<"Roll_no:"<<roll_no<<endl;
}
void Academic::get_marks(){
    cout<<"Enter the marks m1 & m2:"<<endl;
    cin>>m1>>m2;
}
void Academic::show_marks(){
    cout<<"Marks m1 & m2 are:"<<m1<<endl<<m2;
}

void Result ::compute_avg(){
    avg_score=(m1+m2)/2;
}
void Result :: display(){
    cout<<"\n";
    cout<<"Score="<<avg_score;
}
main(){
    Result r1;
    r1.get_details();
    r1.get_marks();
    r1.compute_avg();
    r1.show_details();
    r1.show_marks();
    r1.display();
}