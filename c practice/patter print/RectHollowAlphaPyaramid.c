#include<stdio.h>
int main(){
    int n;
    printf("Enter the no. of rows(n-1):");
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    for(int i=1;i<=2*n+1;i++){  
        char ch=(char)(i+64);   //for 1st line
        printf("%c",ch);
    }

    printf("\n");
    for(int i=1;i<=n;i++){
        char ch = 'A';
        for(int j=1;j<=nst;j++){
            printf("%c",ch);
            ch++;
        }
        int a=0;
        for(int j=1;j<=nsp;j++){  
            printf(" ");
            a++; 
        }
      
        char currChar = ch+a; 
        for(int j=1;j<=nst;j++){
            printf("%c",currChar);
            currChar++; 
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}
