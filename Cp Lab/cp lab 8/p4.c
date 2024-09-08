//WAP to find frequency of a given character in given string.
#include<stdio.h>
int main(){
    char ch [100],n;
    int count=0;
    printf("Enetr the string:");
    gets(ch);
    puts(ch);
    printf("Enter the character of string:");
    scanf("%c",&n);
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]==n)
        count++;
    }
     
printf("Frequency of'%c'=%d\n",n,count);
    return 0;
}