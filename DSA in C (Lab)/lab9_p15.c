// WAP to perform selection sort 
#include <stdio.h>
#include <stdlib.h>

void selectionSort(int *arr, int n) {
    int i, j, minIndex, temp;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int n;

    // Input
    printf("Enter the number of values to be sorted: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));


    printf("Enter the values: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // before sorting
    printf("Before sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    selectionSort(arr, n);

    // after sorting
    printf("After sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


    return 0;
}