#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 1st no.");
    scanf("%d",&a);
    printf("Enter 2nd no");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("value of 1st no.after swaping is %d\n",a);
    printf("value of 2nd no. after swaping is %d\n",b);
    return 0;
}