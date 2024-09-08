/*
ASSIGNMENT- 0
Ques - 2
Problem Statement:
Write a program to print the sum of two integers a and b
Input:
Two integers a and b.
Output:
The sum of a and b.
Sample input :
2 3
Sample output:
5
*/

#include <stdio.h>

int main()
{
    int a, b;
    printf("enter nuber a\n"); 
    scanf("%d", &a);

    printf("Enter number b\n");
    scanf("%d", &b);

    printf("the sum is %d\n", a+b);

    return 0;
}