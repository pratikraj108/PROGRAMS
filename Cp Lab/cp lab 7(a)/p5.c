//WAP to copy all even no. and all odd no. from a given array into the two seperate array in c.
#include <stdio.h>
int main() {
    int array[100], evenArray[100], oddArray[100];
    int size, i, evenCount = 0, oddCount = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for(i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    for(i = 0; i < size; i++) {
        if(array[i] % 2 == 0) {
            evenArray[evenCount++] = array[i];
        } else {
            oddArray[oddCount++] = array[i];
        }
    }
    printf("Even numbers: ");
    for(i = 0; i < evenCount; i++) {
        printf("%d ", evenArray[i]);
    }
    printf("\nOdd numbers: ");
    for(i = 0; i < oddCount; i++) {
        printf("%d ", oddArray[i]);
    }
    return 0;
}
