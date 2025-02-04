#include<stdio.h>
int main(){
    int n;
    printf("Enter the no. of rows(n-1):");
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    for(int i=1;i<=2*n+1;i++){     //for 1st line
        printf("%d",i);
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=nst;j++){       //numbers
            printf("%d",a);
            a++;
        }
        for(int j=1;j<=nsp;j++){       //spaces
            printf(" ");
            a++;
        }
        for(int j=1;j<=nst;j++){
            printf("%d",a);
            a++;                       //numbers
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}
