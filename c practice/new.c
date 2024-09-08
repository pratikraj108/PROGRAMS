#include <stdio.h>

int main() {
    int rows = 5;
    int i = 1;

    while (i <= rows) {
        int spaces = rows - i;
        int j = 1;

        while (spaces > 0) {
            printf(" ");
            spaces--;
        }

        while (j <= i) {
            printf("*");
            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
}
