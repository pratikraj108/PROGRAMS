//WAP to calculate sum and avg of 10  element of given array .
#include<stdio.h>
int main(){
    int arr[10];
    int i,sum=0;
    for(i=0;i<10;i++){
        printf("Enter the array element:");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++){
        printf("%d",arr[i]);}
        for(int i=0;i<10;i++){
           sum=sum+arr[i];
           printf("%d\n",sum);
           float avg=sum/10.0;
           printf("%.2f\n",avg);
        }
        return 0;
    }
        

