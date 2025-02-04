#include <stdio.h>

int main() {
    double distanceInKm;

    // Input distance in kilometers
    printf("Enter distance in kilometers: ");
    scanf("%lf", &distanceInKm);

    // Conversion factors
    double meters = distanceInKm * 1000;
    double feet = distanceInKm * 3280.84;
    double inches = distanceInKm * 39370.1;
    double centimeters = distanceInKm * 100000;

    // Display the converted distances
    printf("\nConverted distances:\n");
    printf("Meters: %.2lf m\n", meters);
    printf("Feet: %.2lf ft\n", feet);
    printf("Inches: %.2lf in\n", inches);
    printf("Centimeters: %.2lf cm\n", centimeters);

    return 0;
}
