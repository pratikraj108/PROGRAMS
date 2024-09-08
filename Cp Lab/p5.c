#include<stdio.h>

int sum();
int avg();

int main(){
    sum();
    avg();
    return 0;
}

int sum(){
    int t=1, add = 0; // Initialize add to 0
    while(t<=10){
        add=add+t;
        t=t+1;
    }
    printf("Sum=%d\n",add);
    return add; // Return sum
}

int avg(){
    int sumVal = sum(); // Call sum() function to get the sum
    float avg = (float) sumVal / 10.0; // Calculate average
    printf("Average=%f\n",avg);
    return 0;
}
