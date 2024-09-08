#include<stdio.h>
int main()
{
    int i,j;
    char ch,k= 'A';
    
    for(i=1;i<=5;i++)
    {
        ch='A';
        for(j=1;j<=i;j++)
        {
            printf("%c",k++);
        }
        printf("\n");
    }
    return 0;
}