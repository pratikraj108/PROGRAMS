#include<stdio.h>
int main()
{
    //int i,j;
    char ch;
    for(int i=1;i<=5;i++)
    {
        ch='A';
        for(int j=1;j<=i;j++)
        {
            printf("%c",ch++);
        }
        printf("\n");
    }
    return 0;
}