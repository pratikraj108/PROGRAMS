//Sparse matrix representation.
#include<stdio.h>
int main(){
int arr[4][4];
    int x=-1;
int b[x][3];
    printf("Enter the value for 4x4 matrix:");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&arr[i][j]);
            
            if(arr[i][j]!=0){
                x++;
                b[x][0]=i;
                b[x][1]=j;
                b[x][2]=arr[i][j];
            }
        }
    }
    printf("The 3-column representation of the matrix:\n");
    for(int i=0;i<=x;i++){
        for(int j=0;j<3;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
