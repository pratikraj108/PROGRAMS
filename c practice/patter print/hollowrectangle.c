#include<stdio.h>
int main(){
    int n,m;
    printf("Enter no. of rows:");
    scanf("%d",&n);
    printf("Enetr no. of column:");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==1||i==n||j==1||j==m)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}