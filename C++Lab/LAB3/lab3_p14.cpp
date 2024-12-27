#include<iostream>
using namespace std;
class Array{
	int size,*p;
	public:
		void allocate();
		void getdata();
		void display();
		void prime();
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
bool Prime(int num) {
    if (num <= 1) 
	return false;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) 
		return false;
    } 
    return true;
}

void Array::prime() {
    int count = 0;
    cout << "\nPrime numbers array are:\n";
    for (int i = 0; i < size; i++) {
        if (Prime(p[i])) {
            cout << p[i] << " ";
            count++;
        }
    }
    cout << "\nTotal prime numbers: " << count << "\n";
}

main(){
	Array a1;
	a1.getdata();
	a1.display();
    a1.prime();
}
