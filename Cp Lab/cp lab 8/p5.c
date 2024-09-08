//WAP to find a string is palindrom or not
#include<stdio.h>
int main(){
    char a[100],b[100];
    int length=0,flag=0,i,j;
    printf("Enetr a string:");
    gets(a);
    puts(a);
    for(int i=0;a[i]!='\0';i++)
    length++;
    j=0;
    for(int i=length-1;i>=0;i--){
        b[j]=a[i];
        j++;
    }
    b[j]='\0';
    for(int i=0;i<length;i++){
        if(a[i]!=b[i]){
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("Palindrome\n");
    else
    printf("Not Palindrome\n");
    return 0;
}