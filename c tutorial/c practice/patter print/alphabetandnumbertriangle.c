#include<stdio.h>

int main() {
    int n;
    printf("Enter no. of rows:");
    scanf("%d", &n);
    
    for(int k = 1; k <= n; k++) {
        if(k % 2 != 0) {
            char ch = 'A';
            for(int i = 1; i <= k; i++) {
                printf("%c ", ch++);
            }
        } else {
            for(int i = 1; i <= k; i++) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
    return 0;
}
