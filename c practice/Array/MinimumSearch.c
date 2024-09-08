#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int min=arr[0];
    for(int i=0;i<=6;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("Max no. is %d:",min);
    return 0;
}