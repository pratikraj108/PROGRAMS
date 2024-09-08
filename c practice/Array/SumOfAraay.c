#include<stdio.h>
int main()
 {

    int arr[5];
    int sum=0;
    for(int i=0;i<=4;i++){
        printf("Eneter element number %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=4;i++){
        sum=sum+arr[i];
        
    }
    printf("sum of element is%d:",sum);
    return 0;
    }

