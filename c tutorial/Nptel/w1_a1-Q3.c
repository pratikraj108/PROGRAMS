/*
ASSIGNMENT-1  Ques-3
Problem Statement:
Given the coefficients of a pair of linear equations,
a1x+b1y=c1 
a2x+b2y=c2
Find the solutions to x and y
Input:
Input consists two lines.
The first line contains coefficients of first equation,a1 b1 c1 in that order
The second line contains coefficients of second equation, a2 b2 c2 in that order
Output:
The solutions to x and y.
Note : You can assume that both x and y will always be integers.
You can also assume that the solution is unique.
Sample input :
--------------------
2 3 7
4 -2 6
Sample Output: 
----------------------
2 1 
Explanation:
----------------
The set of equations are :
2x+3y=74x−2y=6
The solution is x=2;y=1.
Hint:
Recall the gaussian elimination method learned in high school.
For example consider the set of equations,
2x+3y=74x−2y=6
To solve for x, multiply the first equation by b2= −2 and the second equation by b1=3,we get 
−4x−6y= −1412x−6y = 18
Subtracting equation 1 and 2, we get −16x=−32 and therefore x=−32−16=2.
One can similarly solve for y.
Formulate the steps involved during gaussian elimination in terms of a1 b1 c1 and a2 b2 c2 and convert this into a program.
*/
#include <stdio.h>

int main() {
    float a1, b1, c1, a2, b2, c2;

    // Input coefficients
    printf("Enter coefficients for equation 1 (a1 b1 c1): ");
    scanf("%f %f %f", &a1, &b1, &c1);

    printf("Enter coefficients for equation 2 (a2 b2 c2): ");
    scanf("%f %f %f", &a2, &b2, &c2);

    // Calculate determinant
    float determinant = a1 * b2 - a2 * b1;

    // Check if the system of equations has a unique solution
    if (determinant != 0) {
        // Calculate solutions using Cramer's rule
        float x = (c1 * b2 - c2 * b1) / determinant;
        float y = (a1 * c2 - a2 * c1) / determinant;

        printf("Solution: x = %.2f, y = %.2f\n", x, y);
    } else {
        // If determinant is zero, the system may have no solutions or infinitely many solutions
        if ((c1 * b2 - c2 * b1 == 0) && (a1 * c2 - a2 * c1 == 0))
            printf("Infinite solutions\n");
        else
            printf("No solution\n");
    }

    return 0;
}


