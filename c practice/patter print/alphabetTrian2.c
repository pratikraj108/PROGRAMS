#include<stdio.h>
int main(){
    int n;
    printf("Enter the no. of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int ch= 'A';
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%c",ch++);
        }
        printf("\n");
    }
    return 0;
}