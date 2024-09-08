/*Week 2: Assignment 2 - Question 1
Parity Checker:
You are given a sequence of bits (1's and 0's).
The sequence is said to have even parity if and only if the number of 1's in the sequence if even.
Write a C program to that outputs 1 if the sequence has even parity and 0 otherwise.
Input:
A sequence of bits (0's and 1's) ending with a -1.
(Note : -1 is not a part of input. It only signifies that input has ended)
Output:
1 if the number of ones in the sequence is even.
0 if the number of ones in the sequence is odd.
Sample Inputs and Outputs:
Sample input 1
--------------------
0 1 1 -1
Sample Output 1
---------------------
1   
Explanation:
----------------
The input sequence is  011
 . It has two ones. Since 2 is even, the sequence has even parity.
Sample input 2
--------------------
0 1 0 1 0 1 -1
Sample Output 1
----------------------
0   
Explanation:
----------------
The input sequence is 010101
 . The number of 1's is three. Since 3 is odd,  the sequence does not have even parity.*/

#include <stdio.h>
int main() {
    int sequence, count = 0;
    //printf("Enter the bit sequence, ending with -1: ");
    while(1) {
        scanf("%d", &sequence);
        if(sequence == -1) {
            break;
        } else if(sequence == 1) {
            count++;
        }
    }
    if(count % 2 == 0) {
        printf("1");  // Even parity
    } else {
        printf("0");  // Odd parity
    }
    return 0;
}

