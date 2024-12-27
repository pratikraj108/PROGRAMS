#include<iostream>
using namespace std;
class Array{
	int size,*p;
	public:
		void allocate();
		void getdata();
		void display();
        void search();
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
	cout<< endl;
}

void Array::search(){
	int n,flag=0;
   cout<<"\n Enter element for search: ";
   cin>>n;
   for (int i = 0; i < size; i++) {
        if (p[i] == n) {
            cout << "Element found at index: " << i << endl;
            flag = 1;
            break;
        }
    }
    if (!flag) {
        cout << "Element not found" << endl;
    }
}

main(){
	Array a1;
	a1.getdata();
	a1.display();
    a1.search();
}
