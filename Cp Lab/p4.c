#include <stdio.h>

// Function to find the maximum between two numbers
int findMax(int a, int b) {
    return (a > b) ? a : b;
}

// Function to find the minimum between two numbers
int findMin(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int num1, num2;

    // Ask the user to enter two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Call functions to find maximum and minimum
    int maximum = findMax(num1, num2);
    int minimum = findMin(num1, num2);

    // Print the results
    printf("Maximum number: %d\n", maximum);
    printf("Minimum number: %d\n", minimum);

    return 0;
}
