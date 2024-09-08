//WAP to find sum and avg of all array element using pointer .
#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    float avg;
    int *p;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int arr[n];
    p = arr;
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", p + i);
    }
    for(i = 0; i < n; i++) {
        sum += *(p + i);
    }
    avg = sum / n;
    
    printf("Sum is: %d\n", sum);
    printf("Average is: %.2f\n", avg);
    
    return 0;
}
