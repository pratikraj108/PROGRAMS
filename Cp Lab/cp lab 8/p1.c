//WAP to read and print a string.
#include<stdio.h>
int main(){
    char ch[100];
    printf("Enter string:");
    gets(ch);
   // puts(ch);
    int i;
    for(i=0;ch[i]!='\0';i++){
        printf("%c\n",ch[i]);
    }
   
    return 0;
}