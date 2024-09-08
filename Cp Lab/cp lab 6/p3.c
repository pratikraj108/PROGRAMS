//WAP to display first 10 natural no.and find their sum and avg. by using function
#include<stdio.h>
int sum();
int avg();
int main(){
sum();
avg();
return 0;}
 int sum(){
    int t=1,add=0;
   
    while(t<=10){
        add=add+t;
        t=t+1;}
        printf("sum=%d\n",add);  
        return add;
    }
int avg(){
    int sumvalue = sum();
    float avg= (float) sumvalue/10.0;
    printf("Avg=%f\n",avg);
    return 0;
}    

