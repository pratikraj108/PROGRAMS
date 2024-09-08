#include<iostream>
using namespace std;
class matrix{
	int r,c;
	int **mat;
	public:
		void allocate();
		void input();
		void display();
		
};        
void matrix::allocate(){
	mat=new int *[r];
	for(int i=0;i<r;i++){
		mat[i]=new int[c];
	}
}
void matrix::input(){
	cout<<"Enetr order of matrix r,c\n";
	cin>>r>>c;
	allocate();
	cout<<"Enter array elements\n";
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>mat[i][j];
		}
	}
}
void matrix::display(){
	cout<<"\nMatrix is\n";
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<mat[i][j]<<"\t";
		}
		cout<<endl;
	}
}

main(){
	matrix m1,m2,output;
	m1.input();
	m2.input();
	m1.display();
	m2.display();
	
}
