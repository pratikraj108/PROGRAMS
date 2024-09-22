#include<iostream>
using namespace std;
class Array{
	int size,*p;
	public:
		void allocate();
		void getdata();
		void display();
		void deallocate();
};
void Array::allocate(){
	p=new int[size];
}
void Array::getdata(){
	cout<<"Enter value of size:\n";
	cin>>size;
	allocate();
	cout<<"Enter array element:\n";
	for(int i=0;i<size;i++){
		cin>>p[i];
	}
}
void Array::display(){
	cout<<"\n Array  element are\n";
	for (int i=0;i<size;i++){
		cout<<p[i]<<"\t";
	}
}
void Array::deallocate(){
	int *p=new int[size];
	delete p;
	p=NULL;
	cout<<"\n deallocate success:";
}
main(){
	Array a1;
	a1.getdata();
	a1.display();
	a1.deallocate();
}
