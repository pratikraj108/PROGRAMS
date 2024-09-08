#include<stdio.h>

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    int nol = n;              //no. of letter
    int nsp = 1;
    for(int i = 1; i <= 2 * n + 1; i++) { //for 1st line
        printf("%c", 'A' + i - 1);
    }
    printf("\n");
    for(int i = 1; i <= n; i++) {
        char ch = 'A';                     // starting character
        for(int j = 1; j <= nol; j++) {      // letters
            printf("%c", ch);
            ch++;
        }
        for(int j = 1; j <= nsp; j++) {        // spaces
            printf(" ");
        }
        ch++;
        for(int j = 1; j <= nol; j++) {     // letters
            printf("%c", ch);
            ch++;
        }
        nol--;
        nsp += 2;
        printf("\n");
    }
    return 0;
}
