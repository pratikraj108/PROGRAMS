#include <stdio.h>
int main() {
    int array[100];
    int size, i;
    int positive_count = 0, negative_count = 0, zero_count = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for(i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    for(i = 0; i < size; i++) {
        if(array[i] > 0) {
            positive_count++;
        } else if(array[i] < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }
    printf("Number of positive elements: %d\n", positive_count);
    printf("Number of negative elements: %d\n", negative_count);
    printf("Number of zero elements: %d\n", zero_count);
    return 0;
}
