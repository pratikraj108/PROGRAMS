#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Print the top side of the rectangle
    for (i = 1; i <= cols; i++) {
        printf("*");
    }
    printf("\n");

    // Print the sides of the rectangle
    for (i = 2; i <= rows - 1; i++) {
        printf("*");
        for (j = 2; j <= cols - 1; j++) {
            printf(" ");
        }
        printf("*\n");
    }

    // Print the bottom side of the rectangle
    for (i = 1; i <= cols; i++) {
        printf("*");
    }
    printf("\n");

    return 0;
}
