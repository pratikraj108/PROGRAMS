//WAP to perform multiplication of given two matrix.
#include<stdio.h>
#define R1 3
#define C1 3
#define R2 3
#define C2 3
int main(){
    int matrix1[R1][C1];
    int matrix2[R2][C2];
    int result[R1][C2];
    printf("Enetr element of 1st matrix:\n");
    for(int i=0;i<R1;i++){
        for(int j=0;j<C1;j++){
            printf("Element[%d][%d]:",i,j);
            scanf("%d",&matrix1[i][j]);}
        }
        printf("Enetr element of 2nd matrix:\n");
        for(int i=0;i<R2;i++){
        for(int j=0;j<C2;j++){
            printf("Element[%d][%d]:",i,j);
            scanf("%d",&matrix2[i][j]);}
    }
    for(int i=0;i<R1;i++){
        for(int j=0;j<C2;j++){
            result[i][j]=0;
            for(int k=0;k<C1;k++){
                result[i][j] += matrix1[i][k]* matrix2[k][j];
            }
        }
    }
    printf("Resultant matrix after multiplication:\n");
    for(int i=0;i<R1;i++){
        for(int j=0;j<C2;j++){
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}