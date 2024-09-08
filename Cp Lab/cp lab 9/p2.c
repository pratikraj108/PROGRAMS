//WAP to perform a arthematic operation using pointer.
#include <stdio.h>
int main() {
    int n,m;
    int result;
    char operation;
    int *p1 = &n;
    int *p2 = &m;
    int *pResult = &result;
    printf("Enter first number: ");
    scanf("%d", p1);
    
    printf("Enter second number: ");
    scanf("%d", p2);
    
    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation);
    
    switch(operation) {
        case '+':
            *pResult = *p1 + *p2;
            printf("Result: %d + %d = %d\n", *p1, *p2, *pResult);
            break;
        case '-':
            *pResult = *p1 - *p2;
            printf("Result: %d - %d = %d\n", *p1, *p2, *pResult);
            break;
        case '*':
            *pResult = (*p1) * (*p2);
            printf("Result: %d * %d = %d\n", *p1, *p2, *pResult);
            break;
        case '/':
            if (*p2 != 0) {
                *pResult = (*p1) / (*p2);
                printf("Result: %d / %d = %d\n", *p1, *p2, *pResult);
            } else {
                printf("Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operation.\n");
    }
    
    return 0;
}
