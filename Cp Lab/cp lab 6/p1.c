//WAP to find max and min between two no. using function

#include <stdio.h>
void max();
int main(){
    max();
    return 0;}
    void max(){
        int a,b;
        printf("Enter the number:");
        scanf("%d %d",&a,&b);
        if(a>b)
        printf("Max a");
        else if(b>a)
        printf("Max b");
        else
        printf("a=b");
    }
