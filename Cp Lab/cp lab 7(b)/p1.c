//WAP to read & print 2-D array element and size of the anay is mxn
#include<stdio.h>
int main(){
    int r,c;
    printf("Eneter no. of rows:");
    scanf("%d",&r);
    printf("Eneter no. of column:");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enetr the elements of the %d * %d array:\n",r,c);

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Element[%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n Element of the %d * %d array:\n",r,c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}