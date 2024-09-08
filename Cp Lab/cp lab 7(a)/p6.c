//WAP to search a value in the given array and also print it position in c
#include <stdio.h>
int main() {
    int array[100];
    int size, i, searchValue, position = -1;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for(i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    printf("Enter the value to search: ");
    scanf("%d", &searchValue);
    for(i = 0; i < size; i++) {
        if(array[i] == searchValue) {
            position = i;
            break;
        }
    }
    if(position != -1) {
        printf("The value %d is found at position %d.\n", searchValue, position + 1);
    } else {
        printf("The value %d is not found in the array.\n", searchValue);
    }
    return 0;
}
