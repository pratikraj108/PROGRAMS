//WAP to find sum , row wise and column wise seperately for a given matrix in c.
#include<stdio.h>
#define rows 3
#define cols 3

int main(){
    int matrix[rows][cols];

    printf("Enter elements of the %d x %d matrix:\n", rows, cols);
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("Element[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nSum of each row:\n");
    for(int i = 0; i < rows; i++){
        int row_sum = 0;
        for(int j = 0; j < cols; j++){
            row_sum += matrix[i][j];
        }
        printf("Row %d: %d\n", i+1, row_sum);
    }

    printf("\nSum of each column:\n");
    for(int j = 0; j < cols; j++){
        int col_sum = 0;
        for(int i = 0; i < rows; i++){
            col_sum += matrix[i][j];
        }
        printf("Column %d: %d\n", j+1, col_sum);
    }

    return 0;
}
