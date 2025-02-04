#include<stdio.h>
int main(){
    int arr[5];
    int mul=1;
    for(int i=0;i<=4;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=4;i++){
        mul=mul*arr[i];
    }
    printf("multiply of element of array is %d:",mul);
    return 0;
}