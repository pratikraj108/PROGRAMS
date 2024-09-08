//WAP to create ,intialize and use of pointer .
#include <stdio.h>

int main() {
    int a = 10;
    int *p;
    p= &a;
    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", p);
    *p= 20;
    return 0;
}
