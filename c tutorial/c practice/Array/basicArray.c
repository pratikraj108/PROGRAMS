#include<stdio.h>
int main()
 {
//     int arr[5]={1,2,3,4,5};
//     arr[4]=100;            //{1,2,3,4,100}
//     printf("%d",arr[4]);
    //return 0;
    int arr[5];
    for(int i=0;i<=4;i++){
        printf("Eneter element number %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d",arr[i]);
    }
    return 0;
    }

