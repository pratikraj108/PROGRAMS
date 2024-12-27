#include<iostream>
using namespace std;
class matrix{
	int r,c;
	int **mat;
	public:
		void allocate();
		void input();
		void display();
		void add(matrix,matrix);
        void sub(matrix,matrix);
        // void mul(matrix,matrix);
        // void trans(matrix);
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
void matrix::add(matrix A,matrix B){
	if(A.r==B.r && A.c==B.c){
        r=A.r;
        c=B.c;
        allocate();
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			mat[i][j]=A.mat[i][j]+B.mat[i][j];
		}
	}
    }
}
void matrix::sub(matrix A,matrix B){
	if(A.r==B.r && A.c==B.c){
        r=A.r;
        c=B.c;
        allocate();
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			mat[i][j]=A.mat[i][j]-B.mat[i][j];
		}
	}
 
}
}

// void matrix::mul(matrix A,matrix B){
// 	if(A.r==B.r && A.c==B.c){
//         r=A.r;
//         c=B.c;
//         allocate();
// 	for(int i=0;i<r;i++){
// 		for(int j=0;j<c;j++){
// 			mat[i][j]=A.mat[i][j]*B.mat[i][j];
// 		}
// 	}
 
// }
// }
// void matrix::trans(matrix A){
	
//         r=A.c;
//         c=A.r;
// 	for(int i=0;i<r;i++){
// 		for(int j=0;j<c;j++){
// 			A.mat[j][i]=mat[i][j];
// 		}
// 	}
// }

int main() {
    matrix m1, m2, output;
    m1.input();
    m2.input();
    m1.display();
    m2.display();

    output.add(m1, m2);
    cout << "\nAddition of matrices:\n";
    output.display();

    output.sub(m1, m2);
    cout << "\nSubtraction of matrices:\n";
    output.display();

    // output.mul(m1, m2);
    // cout << "\nMultiplication of matrices:\n";
    // output.display();

    // output.trans(m1);
    // cout << "\nTranspose of the first matrix:\n";
    // output.display();

    return 0;
}
