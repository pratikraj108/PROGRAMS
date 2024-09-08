#include<stdio.h>
int main(){
    int n,search, flag=0;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the values:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to be search:\n");
    scanf("%d",&search);
    for(int i=0;i<n;i++){
        if(arr[i]==search){
            printf("The number is at location:%d\n",i+1);
            flag=1;
            break;
        }
    }
 return 0;   
}