//WAP to sort word in disctionary order.
#include<stdio.h>
#include<string.h>
int main(){
    int i,j;
    char str[5][50],temp[50];
    printf("Enetr 5 words:\n");
    for(int i=0;i<5;i++)
    gets(str[i]);
    for(i=0;i<4;i++){
        for(j=i+1;j<5;j++){
            if(strcmp(str[i],str[j])>0){
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
        printf("\n In Dictionary order:\n");
        for(i=0;i<5;i++){
            puts(str[i]);
        }
    
    return 0;
}
