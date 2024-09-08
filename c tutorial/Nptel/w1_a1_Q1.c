/* ASSIGNMENT-1
Ques- 1
Problem Statement:
You have a certain number of 100 rupee notes, 10 rupee notes and 1 rupee notes with you.
There is an item you want to buy whose price is given to you.
Write a program to find if the item is affordable, that is the price of the item is less than or equal to the current money you have.
Input:
Four non negative integers: 
The first input is an integer representing the number of 100 rupee notes.
The second input is an integer representing the number of 10 rupee notes.
The third input is an integer representing the number of 1 rupee notes.
The fourth input is an integer representing the price of the item.
Output:
You have to output 1 if the item is affordable.
You have to output 0 if the item is not affordable.
Sample Inputs and Outputs:
Sample input 1:
--------------------
9 10 1 1001
Sample Output 1:
----------------------
1
Explanation:
----------------
The total amount of money is 900 + 100 + 1 = 1001, which is equal to the price of the item.
So, the item is affordable.
Sample input 2:
--------------------
9 10 0 1001
Sample Output 2:
----------------------
0
Explanation:
----------------
The total amount of money is 900 + 100 + 0 = 1000, which is less than the price of the item.
So, the item is not affordable.*/
 
 #include <stdio.h>


int main() {
    int hundred_notes, ten_notes, one_notes, item_price;

    // Taking input from the user
    printf("Enter the number of 100 rupee notes: ");
    scanf("%d", &hundred_notes);

    printf("Enter the number of 10 rupee notes: ");
    scanf("%d", &ten_notes);

    printf("Enter the number of 1 rupee notes: ");
    scanf("%d", &one_notes);

    printf("Enter the price of the item: ");
    scanf("%d", &item_price);

int is_affordable(int hundred_notes, int ten_notes, int one_notes, int item_price) {
    int total_money = (hundred_notes * 100) + (ten_notes * 10) + one_notes;
    return item_price <= total_money;
}
    // Checking affordability
    if (is_affordable(hundred_notes, ten_notes, one_notes, item_price)) {
        printf("You can afford the item!\n");
    } else {
        printf("Sorry, the item is not affordable.\n");
    }

    return 0;
}


