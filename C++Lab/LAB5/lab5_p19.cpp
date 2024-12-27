//TO COMPUTE TRANSPOSE OF A MATRIX USING MATRIX CLASS.
#include<iostream>
using namespace std;
class matrix{
	int r,c;
	int **mat;
	public:
		void allocate();
		void input();
		void display();
        void trans(matrix);
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
	cout<<"Enter array elements"<<endl;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>mat[i][j];
		}
	}
}
void matrix::display(){
	cout<<"\nMatrix is"<<endl;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<mat[i][j]<<"\t";
		}
		cout<<endl;
	}
}

void matrix::trans(matrix A){
        r=A.c;
        c=A.r;
        allocate();
           cout << "The transpose of matrix is :";
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			mat[i][j]=A.mat[j][i];
		}
	}
}


int main() {
    matrix m1,m2;
    m1.input();
    m1.display();
    m2.trans(m1);
    m2.display();
return 0;
}

