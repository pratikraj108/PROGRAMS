//WAP to convert a given matrix into the upper triangular and lower triangular matrix.
#include<stdio.h>
#define N 3

int main(){
    int matrix[N][N];
    int upper_triangular[N][N];
    int lower_triangular[N][N];

    printf("Enter elements of the %d x %d matrix:\n", N, N);
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("Element[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if (j >= i)
                upper_triangular[i][j] = matrix[i][j];
            else
                upper_triangular[i][j] = 0;
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if (j <= i)
                lower_triangular[i][j] = matrix[i][j];
            else
                lower_triangular[i][j] = 0;
        }
    }

    printf("\nUpper Triangular Matrix:\n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("%d\t", upper_triangular[i][j]);
        }
        printf("\n");
    }

    printf("\nLower Triangular Matrix:\n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("%d\t", lower_triangular[i][j]);
        }
        printf("\n");
    }

    return 0;
}
