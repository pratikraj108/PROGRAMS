#include<stdio.h>
int main(){
    int arr[10] ={1,2,3,4,5,6,7,8};
    for(int i=0;i<=7;i++){
        if(i%2!=0)
        arr[i]*=2;
        else
        arr[i]+=10;
    }
    for(int i=0;i<=7;i++){
        printf("%d",arr[i]);
        printf("\t");
    }
    return 0;
}