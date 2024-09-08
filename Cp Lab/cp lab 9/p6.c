#include <stdio.h>

int main() {
    char str[100];  
    char *p;      
    int length = 0; 

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    p = str;

    while(*p!= '\0') {
        length++;   
        p++;     
    }
    printf("Length of the string: %d\n", length - 1);
    printf("Size of the string in bytes: %lu\n", (length) * sizeof(char));

    return 0;
}
