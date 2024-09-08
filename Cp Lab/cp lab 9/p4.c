//WAP to find the reverse of a given array using pointer in c.
#include <stdio.h>

int main() {
    int n, i;
    int *p;
    printf("Enter the size of array");
    scanf("%d", &n);
    int arr[n];
    p = arr;
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", p + i);
    }
    int *x = p;       
    int *y = p + n - 1; 
    int z;
    
    while(x < y) {
        z= *x;
        *x = *y;
        *y = z;
        x++;
        y--;
    }
    printf("Reverse \n");
    for(i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");
    
    return 0;
}
