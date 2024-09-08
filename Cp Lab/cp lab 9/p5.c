//WAP to copy array to another array using pointer to array in c.
#include <stdio.h>

int main() {
    int n, i;
        int *p1, *p2;
        printf("Enter the number of elements: ");
    scanf("%d", &n);
        int a[n];
    int b[n];
        p1 = a;
        p2= b;
        printf("Enter the elements of 1st array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", p1 + i);
    }
        for(i = 0; i < n; i++) {
        *(p2 + i) = *(p1 + i);
    }
        printf(" array after copy:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", *(p2 + i));
    }
    printf("\n");
    
    return 0;
}
