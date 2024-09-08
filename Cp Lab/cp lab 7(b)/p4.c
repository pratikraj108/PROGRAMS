//WAP to transpose of a given matrix.
#include<stdio.h>
#define Rows 2
#define Cols 2
int main(){
    int matrix[Rows][Cols];
    int transpose [Cols][Rows];
    printf("Enter element of matrix:\n",Rows,Cols);
    for(int i=0;i<Rows;i++){
        for(int j=0;j<Cols;j++){
            printf("Enetr [%d][%d]:",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<Rows;i++){
        for(int j=0;j<Cols;j++){
            transpose[j][i]= matrix[i][j];
        }
    }
    printf("Transpose of the matrix:\n");
    for(int i=0;i<Cols;i++){
        for(int j=0;j<Rows;j++){
            printf("%d\t",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}