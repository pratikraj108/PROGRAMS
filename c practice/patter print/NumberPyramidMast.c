#include<stdio.h>
int main(){
    int n;
    printf("Enter the no. of rows:");
    scanf("%d",&n);
    int nsp = n-1;            //nsp --> no.of spaces
    for(int i=1;i<=n;i++){
       
        for(int j=1;j<=nsp;j++){        //spaces ke leye ek loop
            printf(" ");
        }
        nsp--;
        for(int k=1;k<=i;k++){         //number triangle
            printf("%d",k);
        }
         int a=i-1;
        for(int q=1;q<=i-1;q++){         //extra items ke leye
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}