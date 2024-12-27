#include<iostream>
using namespace std;
main(){
	char op;
	int n1,n2;
	cout<< "Enetr two number";
	cin>>n1>>n2;
	cout<<"Enter operator:+,-,*,/,%";
	cin>>op;
	switch(op){
		case '+':
			cout<<n1<<"+"<<n2<<"="<<n1+n2<<endl;
			break;
		case '-':
			cout<<n1<<"-"<<n2<<"="<<n1-n2<<endl;
			break;
		case '*':
			cout<<n1<<"*"<<n2<<"="<<n1*n2<<endl;
			break;
		case '/':
			cout<<n1<<"/"<<n2<<"="<<n1/n2<<endl;
			break;
		case '%':
			cout<<n1<<"%"<<n2<<"="<<n1 % n2<<endl;
			break;	
		default:
		cout<<"Invalid Operation!"<<endl;
			break;	
		   	
	}
	return 0;
}
