#include <stdio.h>
int main() {
    int rows, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = rows; i >= 1; i--) {
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        for (j = i; j <= rows; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (i = 2; i <= rows; i++) {
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        for (j = i; j <= rows; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

