#include<stdio.h>
int main(){
   
    int choice,a[3][4],i,j;
    do{
    printf("Enter your choices:\n 1.Row major order\n 2.Column major order\n 3.Exit\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("Enter the value for 3x4 2-D array: \n");
            for(i=0;i<3;i++){
                for(j=0;j<4;j++){
                    scanf("%d",&a[i][j]);
                }
            }
            printf(" The 2-D array in Row-major order:\n");
            for(i=0;i<3;i++){
                for(j=0;j<4;j++){
                    printf("%d ",a[i][j]);
                }
                printf("\n");
            }
            break;
        case 2:
            printf("Enter the value of 3x4 2D array:\n");
           for (j = 0; j < 4; j++){
            for (i = 0; i < 3; i++){
                scanf("%d", &a[i][j]);
                }
            }    
            printf("The 2-D array in Column-major order:\n");
            for(i=0;i<3;i++){
                for(j=0;j<4;j++){
                    printf("%d ",a[i][j]);
                }
                printf("\n");
            }
            break;
        case 3:
            break; 
        default:
            printf("Invalid choice\n");
    }
    }while(choice!=3);
    return 0;
    }
