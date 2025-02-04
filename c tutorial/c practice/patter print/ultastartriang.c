#include<stdio.h>
int main(){
    int n;
    printf("Enter the no. of rows");
    scanf("%d",&n);
    //int a=n;                                         // int a=n;
    for(int i=1;i<=n;i++){                            //for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){                    //for(int j=1;j<=a;j++){
            printf("*");                             //printf("*");
        }                                            // }
        printf("\n");                                //a--;
    }                                                //printf("\n");}
   return 0;                                         // return 0;}
}