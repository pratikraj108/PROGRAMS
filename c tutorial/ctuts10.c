#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age\n");

    scanf("%d", &age);
    printf("You have entered %d as your age\n", age);
    if (age>=18) {
        printf(" You can vote!");
    }

    else if(age>10)
    {
        printf(" You are between 10 to 18 and you can vote for kids");
    }

    else{
          printf(" You cannot vote!");
    }
    
    return 0;

}
//*Date= 17-01-2024

// math and science - 45
// science-15
// maths-15

//print the type of gifts you are giving to them