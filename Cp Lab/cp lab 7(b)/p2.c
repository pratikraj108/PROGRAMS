//WAP to perform Sum And Substraction of given two matrix.
#include<stdio.h>
int main(){
    int r,c;
    printf("Eneter no. of rows:");
    scanf("%d",&r);
    printf("Eneter no. of column:");
    scanf("%d",&c);
    int matrix1[r][c],matrix2[r][c],result[r][c],result1[r][c];
    printf("\nEnter the element of 1st matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter element [%d][%d]:",i,j);
            scanf("%d",&matrix1[i][j]);}
    }
        printf("\n Enetr element of 2nd matrix:\n");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                printf("enetr element[%d][%d]:",i,j);
                scanf("%d",& matrix2[i][j]);}
            }
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                result[i][j] = matrix1[i][j] + matrix2[i][j];}
            }
            printf("\n Resultant matrix after addition:\n");
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    printf("%d\t",result [i][j]);}
                    
                
                printf("\n");
            }
            for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                result1[i][j] = matrix1[i][j] - matrix2[i][j];}
            }
            printf("\n Resultant matrix after sub:\n");
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    printf("%d\t",result1 [i][j]);}
                    
                
                printf("\n");
            }
            return 0;}
    