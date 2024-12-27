#include<iostream>
using namespace std;
class Array{
	int size,*p;
	public:
		void allocate();
		void getdata();
		void display();
        void max();
        void min();
        
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
		cout<<p[i]<<"\n";
	}
}
void Array::max(){
	int maximum;
	maximum=p[0];
	for(int i=0;i<size;i++){
		if(maximum<p[i])
		maximum=p[i];
	}
	cout<<"Maximum is:"<<maximum;
}
void Array::min(){
	int minimum;
	minimum=p[0];
	for(int i=0;i<size;i++){
		if(minimum>p[i])
		minimum=p[i];
	}
	cout<<"\nMinimum is:"<<minimum;
}
main(){
	Array a1;
	a1.getdata();
	a1.display();
    a1.max();
    a1.min();
}
