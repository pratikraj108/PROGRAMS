/*write a c++ program to  design a calculator class with following members.
data members:- (n,m,r)
member fxn:- I/P, O/P , add, sub,mul,div.
program will be menu driven*/
#include<iostream>
using namespace std;
class calculator{
	private:
		int n1,n2,r;
	public:
	    void input();	
		void output();
		void add();
		void sub();
		void mul();
		void div();
};
void calculator::input()
    {
	    cout<<"Enter two no.\n";
	    cin>>n1>>n2;
	}
void calculator::output()
    {
	cout<<"Output:"<<r<<endl;
    } 
void calculator::add()
    {
    r=n1+n2;	
	}
void calculator::sub()
    {
	r=n1-n2;
	}
void calculator::mul()
    {
	r=n1*n2;
	}
void calculator::div()
    {
	if(n2!=0)
	 r=n1/n2;
	else
	cout<<"No. not divided by Zero\n"<<endl;
	}			     
       
main(){
	calculator c;
	int choice;
	do{
		cout<<"1.Add\n2.Sub\n3.Mul\n4.Div\n5.Exit\n";
    	//c.input();
		cout<<"Enter choices:\n";
		cin>>choice;
		
		switch(choice){
			case 1:
				c.input();
				c.add();
				c.output();
				break;
			case 2:
				c.input();
				c.sub();
				c.output();
				break;
			case 3:
				c.input();
				c.mul();
				c.output();
				break;
			case 4:
				c.input();
				c.div();
				c.output();
				break;
			case 5:
			    break;
			default:
			    cout<<"Invalid Choice:\n";					
		}
	}while(choice!=5);
	return 0;
}
