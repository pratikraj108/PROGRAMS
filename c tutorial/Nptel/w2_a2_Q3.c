/*Count the Number of 0's Between the First and Last 1
You are given a binary sequence.
Write a C program to count the number of 0's between the first and last 1 in the sequence.
Input:
A sequence of bits (0's and 1's) ending with a -1.
(Note : -1 is not a part of input. It only signifies that input has ended)
Output:
The number of 0's Between the First and Last 1 in the sequence.
Note : Make no assumptions about the data in the sequence.
For instance if there is no starting and ending 1 ( say the sequence is all 0), you have to output 0. 
Sample Inputs and Outputs:
Sample input 1
--------------------
0 1 0 0 1 1 0 1 0 0 -1
Sample Output 1
----------------------
3   
Explanation:
----------------
The sequence between first and last 1 is 1 0 0 1 1 0 1 and the sequence has 3 zeroes in between.
Sample input 2
--------------------
0 0 0 1 1 1 1 1 1 0 0 -1
Sample Output 2
----------------------
0   
Explanation:
----------------
The sequence between first and last 1 is 1 1 1 1 1 1 and the sequence has 0 zeroes in between.
Sample input 3:
--------------------
0 0 1 0 0 0 -1
Sample Output 1
----------------------
0  
Explanation:
----------------
The sequence has a single 1, therefore the output (by problem description) is 0.*/
#include <stdio.h>
int main() {
    int sequence[100];
    int count = 0;
    int first_one_index = -1;
    int last_one_index = -1;
    int num;
    //printf("Enter the sequence, separated by spaces. Enter -1 to end the sequence: ");
    int index = 0;
    while (scanf("%d", &num) == 1 && num != -1) {
        sequence[index] = num;
        index++;
    }
    // Find the index of the first one
    for (int i = 0; i < index; i++) {
        if (sequence[i] == 1) {
            first_one_index = i;
            break;
        }
    }
  // Find the index of the last one
    for (int i = index - 1; i >= 0; i--) {
        if (sequence[i] == 1) {
            last_one_index = i;
            break;
        }
    }
    // Count the number of zeros between the first and last one
    if (first_one_index != -1 && last_one_index != -1) {
        for (int i = first_one_index + 1; i < last_one_index; i++) {
            if (sequence[i] == 0) {
                count++;
            }
        }
    }
    // Output the result
    printf("%d", count);
    return 0;
}

