#include <stdio.h>
int main()
{
    int i, j, a[3][4], choice;
    int J, I, B = 100, W = 4, M = 3, N = 4;
    printf("enter your choice");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf(" row major matrix\n");

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 4; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("row major mat is:\n");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 4; j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
        printf("ENTER the value of I and J ");
        scanf("%d%d", &I, &J);
        int Z = B + W * (I * N + J);
        printf("%d", Z);
        break;
    case 2:
        printf("column major matrix");
        for (j = 0; j < 4; j++)
        {
            for (i = 0; i < 3; i++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 4; j++)
            {
                printf("%d", a[i][j]);
            }
            printf("\n");
        }
        printf("ENTER the value of J and I ");
        scanf("%d%d", &J, &I);
        int X  = B + W * (J * M + I);
        printf("%d", X);
        break;
    default:
        printf("invalid input");
    }
    return 0;
}
