#include<stdio.h>
int main(){
    int arr[10] ={1,2,3,4,5,6,7,8,9};
    int count=0,x=4;
    for(int i=0;i<=10;i++){
        if(arr[i]>x)
        count++;
    }
    
        printf("%d",count);
        printf("\t");
    
    return 0;
}