/*
ASSIGNMENT-1 Ques- 2
Problem Statement:
Given three distinct integers a b and c, write a C program to find the second largest number among them.
Input:
Three distinct integers a b c.
The first input is the integer a.
The second input is the integer b.
The third input is is the integer c.
Output:
The second largest among a, b and c
Sample Inputs and Outputs:
Sample input 1:
--------------------
9 10 1 
Sample Output 1:
----------------------
9
Explanation:
----------------
1 < 9 < 10
Sample input 2:
--------------------
-4 3 9
Sample Output 2:
----------------------
3
Explanation:
----------------
-4 < 3 < 9
*/

#include <stdio.h>

int main() {
    int a, b, c;

    // Taking input from the user
    printf("Enter three distinct integers (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);

    // Checking for the second largest number
    if ((a > b && a < c) || (a < b && a > c)) {
        printf("Second largest number is: %d\n", a);
    } else if ((b > a && b < c) || (b < a && b > c)) {
        printf("Second largest number is: %d\n", b);
    } else {
        printf("Second largest number is: %d\n", c);
    }

    return 0;
}


