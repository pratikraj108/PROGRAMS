//WAP to find reverse of a given array in c
#include <stdio.h>
int main() {
    int array[100], reversedArray[100];
    int size, i, j;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for(i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    for(i = size - 1, j = 0; i >= 0; i--, j++) {
        reversedArray[j] = array[i];
    }
    printf("Original array: ");
    for(i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\nReversed array: ");
    for(i = 0; i < size; i++) {
        printf("%d ", reversedArray[i]);
    }
    return 0;
}
