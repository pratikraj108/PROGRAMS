#include <stdio.h>
#include <stdlib.h>  

// Function for insertion sort
void insertionSort(int *arr, int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n;

    // Input 
    printf("Enter the number of values to be sorted: ");
    scanf("%d", &n);    

  
    int *arr = (int *)malloc(n * sizeof(int)); 

    // if (arr == NULL) {  
    //     printf("Memory allocation failed!\n");
    //     return 1;
    // }

    
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

   
    insertionSort(arr, n);

    //after sorting
    printf("After sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory
    // free(arr);

    return 0;
}
