/*Find moving average:
In this question, you have to output the "two moving average" of a sequence of non-negative numbers.
The two moving average is the sequence of averages of the last 2 entries.
For the first number, no average is output.
For example, if the sequence of numbers is a1,a2,a3,a4,a5
The 2-moving average is  (a1+a2)2,(a2+a3)2,(a3+a4)2,(a4+a5)2
Input:
-------
The input is a sequence of non-negative numbers, terminated by a -1.
There will be at least 3 numbers in the sequence.
Note: The -1 is not part of the sequence. It is just to indicate that the input has ended.
Output:
----------
You have to output the moving average of the sequence. The output should be printed correct to one digit after the decimal.
Hint : Use the format specifier "%.1f" inside printf.
Sample Input 1
---------------------
1 3 2 4 -1
Sample Output 1
-------------------------
2.0 2.5 3.0
Explanation:
-------------------------
(1+3)/2 = 2
(3+2)/2 = 2.5
(2+4)/2 = 3*/
#include <stdio.h>
int main() {
    // Assuming your sequence of numbers is stored in an array
    int sequence[] = {1, 3, 2, 4};
    int length = sizeof(sequence) / sizeof(sequence[0]);
    // Calculate and print the 2-moving average
    for (int i = 1; i < length; i++) {
        double moving_average = (sequence[i - 1] + sequence[i]) / 2.0;
        printf("%.1f ", moving_average);
    }
    return 0;
}
