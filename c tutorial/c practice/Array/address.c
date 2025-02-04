//printf address of array in memeory .
   #include<stdio.h>
   int main(){
    int a[5];
    for(int i=0;i<=4;i++){
        printf("Enter the elemrnt:");
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=5;i++){
     printf("Addres is: %p\n:",&a[i]);  
    }
    return 0;
   }
