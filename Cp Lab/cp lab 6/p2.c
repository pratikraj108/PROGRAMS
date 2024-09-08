#include <stdio.h>
void dia() {
    float r;
    printf("Enter the radius : ");
    scanf("%f", &r);
    printf("Diameter %.2f\n", 2 * r);
}
void circum() {
    float r;
    printf("Enter the radius: ");
    scanf("%f", &r);
    printf("Circumference  %.2f \n", 2 * 3.14 * r);
}
void ar() {
    float r;
    printf("Enter the radius: ");
    scanf("%f", &r);
    printf("Area of the circle: %.2f\n", 3.14* r* r);
}
int main() {
    dia();
    circum();
    ar();
    return 0;
}
