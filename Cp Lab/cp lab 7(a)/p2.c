#include <stdio.h>
int main() {
    int array[100], n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
   
    for(i = 0; i < 100; i++) {
        scanf("%d", &array[i]);
    }
    int min = array[0];
    int max = array[0];
    for(i = 1; i < 100; i++) {
        if(array[i] < min) {
            min = array[i];
        }
        if(array[i] > max) {
            max = array[i];
        }
    }
    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);
    return 0;
}
