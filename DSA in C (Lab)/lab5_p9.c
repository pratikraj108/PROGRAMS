#include <stdio.h>
int partition(int arr[], int beg, int end);
void quicksort(int arr[], int beg, int end);
int main()
{
    int arr[12], i;
    printf("Enter 12 values needs to be sort:\n");
    for (i = 0; i < 12; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Unsorted list as follows:\n");
    for (i = 0; i < 12; i++)
    {
        printf("%d ",arr[i]);
    }
    quicksort(arr, 0, 12 - 1);
    printf("\nThe sorted list as follows:\n ");
    for (i = 0; i < 12; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
int partition(int arr[], int beg, int end)
{
    int left, right, temp, loc, flag;
    loc = left = beg;
    right = end;
    flag = 0;
    while (flag != 1)
    {
        while ((arr[loc] <= arr[right]) && (loc != right))
        {
            right--;
        }
        if (loc == right)
        {
            flag = 1;
        }
        else if (arr[loc] > arr[right])
        {
            temp = arr[loc];
            arr[loc] = arr[right];
            arr[right] = temp;
            loc = right;
        }
        if (flag != 1)
        {
            while ((arr[loc] >= arr[left]) && (loc != left))
            {
                left++;
            }
            if (loc == left)
            {
                flag = 1;
            }
            else if (arr[loc] < arr[left])
            {
                temp = arr[loc];
                arr[loc] = arr[left];
                arr[left] = temp;
                loc = left;
            }
        }
    }
    return loc;
}
void quicksort(int arr[], int beg, int end)
{
    int loc;
    if (beg < end)
    {
        loc = partition(arr, beg, end);
        quicksort(arr, beg, loc - 1);
        quicksort(arr, loc + 1, end);
    }
}