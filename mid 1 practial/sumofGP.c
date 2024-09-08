#include <stdio.h>

int main() {
    int n, i;
    float sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Calculating the sum of the series
    for (i = 1; i <= n; i++) {
        sum += 1.0 / (i * i);
    }

    printf("Sum of the series up to %d terms: %.4f\n", n, sum);

    return 0;
}
