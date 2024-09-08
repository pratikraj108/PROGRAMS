#include <stdio.h>

int main() {
    int n, i;
    int greatest, lowest, num;

    // Ask the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Ask the user to enter the numbers
    printf("Enter %d numbers:\n", n);
    scanf("%d", &num);

    // Initialize greatest and lowest with the first number entered
    greatest = num;
    lowest = num;

    // Iterate through the remaining numbers
    for (i = 1; i < n; i++) {
        scanf("%d", &num);
        
        // Update greatest if the current number is greater
        if (num > greatest) {
            greatest = num;
        }
        
        // Update lowest if the current number is smaller
        if (num < lowest) {
            lowest = num;
        }
    }

    // Print the greatest and lowest numbers
    printf("The greatest number is: %d\n", greatest);
    printf("The lowest number is: %d\n", lowest);

    return 0;
}
