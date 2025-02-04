#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of rows:");
    scanf("%d",&n);                                         //SMART CODE
    int a;                                                  //scanf("%d",&n);
    for(int i=1;i<=n;i++){                                  //for(int i=1;i<=n;i++){
        if(i%2==0) a=1;                                     //for(intj=1;j<=i;j++){
        else a=0;                                           //if((i+j)%2==0)
        for(int j=1;j<=i;j++){                              //printf("1");
            printf("%d ",a);                                //else  printf("0");}
            if(a==0) a=1;                                   //printf("\n")}
            else a=0;                                       //return 0;}
        }
        printf("\n");
    }
    return 0;
}