#include<iostream>
#include<cmath>
using namespace std;
main(){
	double a,b,c,D,r1,r2,real,imaginary;
	cout<<"Enter the coefficient\n";
	cin>>a>>b>>c;
	D=b*b-4*a*c;
	if(D>0){
		r1=(-b+ sqrt(D))/(2*a);
		r2=(-b-sqrt(D))/(2*a);
		cout<<"roots are real and distinct"<<endl;
		cout<<"root 1="<<r1<<endl;
		cout<<"root 2="<<r2<<endl;
	}
	else if(D==0){
		r1=-b/(2*a);
		cout<<"roots are real & equal"<<endl;
		cout<<"root 1 = root 2 ="<<r1<<endl;
	}
	else{
		real=-b/(2*a);
		imaginary=sqrt(-D)/(2*a);
		cout<<"Roots are complex and diff"<<endl;
		cout<<"root 1="<<real<<"+"<<imaginary<<"i"<<endl;
		cout<<"root 1="<<real<<"-"<<imaginary<<"i"<<endl;
		
	}
	return 0;
}
