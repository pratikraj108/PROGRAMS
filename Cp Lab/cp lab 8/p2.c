//WAP to find length,size of given string.
#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];
    printf("Enetr string:");
    gets(ch);
    puts(ch);
    int count=0;
    for(int i=0;ch[i]!='\0';i++){
        count=count+1;
    }
    printf("length of string is %d",count);
    printf("\nsize of string is %d",count+1);
    return 0;
}