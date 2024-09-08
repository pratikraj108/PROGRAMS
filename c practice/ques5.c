#include <stdio.h>

int main() {
    int n, i, sum_even = 0, sum_odd = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum_even = sum_even+ i; // Add even number to sum_even
        } else {
            sum_odd =sum_odd+ i; // Add odd number to sum_odd
        }
    }

    // Output the sums
    printf("Sum of even numbers from 1 to %d: %d\n", n, sum_even);
    printf("Sum of odd numbers from 1 to %d: %d\n", n, sum_odd);

    return 0;
}
