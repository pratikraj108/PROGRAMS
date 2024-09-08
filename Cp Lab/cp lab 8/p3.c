//WAP to find no. of upper case letter , lower case letter,digits,other symbols.
#include<stdio.h>
int main(){
    char ch[100];
    int upper=0,lower=0,digit=0,symbol=0;
    printf("Enter the string:");
    gets(ch);
    //puts(ch);
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]>='A'&&ch[i]<='Z')
        upper++;
        else if(ch[i]>='a'&&ch[i]<='z')
        lower++;
       else if(ch[i]>='0'&&ch[i]<='9')
        digit++;
        else
        symbol++;
    }
    printf("Upper case letter is %d",upper);
    printf("\nlower case letter is %d",lower);
    printf("\ndigit case letter is %d",digit);
    printf("\nsymbol case letter is %d",symbol);

    return 0;
}