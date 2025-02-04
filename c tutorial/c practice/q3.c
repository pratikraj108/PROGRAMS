#include <stdio.h>
int main()
{
    float r,ar,circum;
    printf("Enter the radius:");
    scanf("%f",&r);
    ar=3.14*r*r;
    circum=2*3.14*r;
    printf("Area of circle is:%.2f",ar);
    printf("Circum of circle is:%.2f",circum);
    return 0;

}