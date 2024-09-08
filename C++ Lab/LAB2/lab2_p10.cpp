//Write a c++ program to desgn a classd student having following members: name , roll,m1,m2,m3,total,grade.
#include<iostream>
using namespace std;
class student{
	private:
	 	int roll_No,m1,m2,m3,total;
	 	char grade;
	 	string name;
	public:
	    void input();
		void output();
		void compute_total();
		void compute_grade();
};
 void student::input(){
 	cout<<"Enter name:";
 	cin>>name;
 	cout<<"\nEnter rollN0.";
 	cin>>roll_No;
 	cout<<"\nEnter marks for sub 1:";
 	cin>>m1;
 	cout<<"\nEnter marks for sub 2:";
 	cin>>m2;
 	cout<<"\nEnter marks for sub 3:";
 	cin>>m3;	
 }
 void student::compute_total()
    {total=m1+m2+m3;}
 void student::compute_grade()
 {
    int avg=total/3.0;
    if(avg>=90)
    grade='A';
    else if(avg>=80)
    grade='B';
    else if(avg>=70)
    grade='C';
    else if(avg>=60)
    grade='D';
    else if(avg>=50)
    grade='E';
    else
    grade='F';
 }
 void student::output(){
 	cout<<"Name:"<<name<<endl;
 	cout<<"Roll No."<<roll_No<<endl;
 	cout<<"Marks:"<<m1<<","<<m2<<","<<m3<<endl;
 	cout<<"Total:"<<total<<endl;
 	cout<<"Grade:"<<grade<<endl;
 }
main(){
	student s;
	s.input();
	s.compute_total();
	s.compute_grade();
	s.output();
	
return 0;	
}
