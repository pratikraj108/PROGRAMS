//WAP to perform infix to postfix conversion using stack
#include <stdio.h>
#include <conio.h>
#include <string.h>

char pop();
void push();
int getprec(char);
char infix[20], stack[20], post[20], val;
int i = 0, j = 0, k = 0;

int main()
{
    char a;
    int pre, pre1;
    puts("enter the expression: ");
    gets(infix);
    for (i = 0; infix[i] != '\0'; i++)
    {
        val = infix[i];
        switch (val)
        {
        case '(':
            push();
            break;
        case ')':
            while ((a = pop()) != '(')
                post[j++] = a;
            break;
        case '+':
        case '-':
        case '*':
        case '/':
        case '%':
        case '^':
            pre = getprec(val);
            pre1 = getprec(stack[k - 1]);
            while (pre1 >= pre)
            {
                a = pop();
                post[j++] = a;
                pre1 = getprec(stack[k - 1]);
            }
            push();
            break;
        default:
            post[j++] = val;
        }
    }
    while ((a = pop()) != '\0')

        post[j++] = a;

    puts(post);
    return 0;
}

char pop()
{
    char a;
    a = stack[k - 1];
    k--;
    return a;
}
void push()
{
    stack[k] = val;
    k++;
}
int getprec(char item)
{
    if (item == '+' || item == '-')
        return (1);
    else if (item == '*' || item == '/' || item == '%')
        return (2);
    else if (item == '^')
        return (3);
    else
        return (0);
}

class Solution {
    // Function to sort an array of 0s, 1s, and 2s
    public void sort012(int[] arr) {
        int n = arr.length;
        int low = 0, high = n - 1, mid = 0;

        // Using the Dutch National Flag algorithm
        while (mid <= high) {
            if (arr[mid] == 0) {
                swap(arr, mid++, low++);
            } else if (arr[mid] == 1) {
                mid++;
            } else {
                swap(arr, mid, high--);
            }
        }
    }

    private void swap(int arr[], int i, int j) {
        int t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }
}
