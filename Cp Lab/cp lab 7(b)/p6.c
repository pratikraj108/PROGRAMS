#include<stdio.h>
#define N 3

int main(){
    int matrix[N][N];
    int sum = 0;

    printf("Enter elements of the %d x %d matrix:\n", N, N);
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("Element[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i < N; i++){
        sum += matrix[i][i];
    }

    printf("\nThe matrix is:\n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nThe sum of diagonal elements is: %d\n", sum);

    return 0;
}
 