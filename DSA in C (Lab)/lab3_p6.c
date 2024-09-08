// #include<stdio.h>
// int main(){
//     int temp;
//     int arr[15];
//     printf("Enter the value of 15 elements:\n");
//     for (int i = 0; i < 15; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("The number are as follows:\n");
//     for(int i=0;i<15;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<15-1;i++){
//         for(int j=0;j<15-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
//     printf("The shorted list are as follows:\n");
//     for(int i=0;i<15;i++){
//         printf("%d",arr[i]);
//     }
//     printf("\n");
        
//          return 0;
//     }
   
#include <stdio.h>
void bubbleSort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main() {
    int arr[15];
    printf("Enter the value of elements: \n");
    for (int i = 0; i < 15; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The numbers are as follows:\n");
    for(int i=0;i<15;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    bubbleSort(arr, 15);

    printf("\nSorted array: \n");
    printArray(arr, 15);

    return 0;
}


