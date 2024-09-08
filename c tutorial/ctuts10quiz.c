/* math and science - 45
   science-15
    maths-15
print the type of gifts you are giving to them
*/
#include <stdio.h>

int main()
{
    int math_score ,science_score;

    printf("Enter your math score\n");
    scanf("%d", &math_score);

    printf(" Enter you science score\n");
    scanf("%d",&science_score);

    if(math_score>= 37 & science_score>=37)
     {
     printf (" You passed in both subject\n You got 45$ as a gift\n");  
     }

    else if(math_score<37 & science_score>=37)
    {
        printf(" you passed in science but fail in math\n You got 15$ as your gift\n ");
    }
    
    
     else if(math_score>=37 & science_score<37)
     {
     printf(" you passed in math but fail in science\n You got 15$ as your gift\n ");
     }
    
    else
    {
        printf( "You failed in both subject ");
    }

    return 0;
}

//*Date= 17-01-24




