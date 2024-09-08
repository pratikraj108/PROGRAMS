#include <stdio.h>

int main() {
    int arr[100];
    printf("Enter the element: \n");
    for (int i = 0; i < 12; i++) {
        scanf("%d", &arr[i]);
    }
    int search;
    int left = 0;
    int right = 11;
    int mid;
    int flag = 0;

    printf("Enter the element to search: ");
    scanf("%d", &search);

    while (left <= right) {
        mid = left + (right - left) / 2;

        if (arr[mid] == search) {
            printf("Element found at index %d\n", mid);
            flag = 1;
            break;
        }

        if (arr[mid] < search) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (!flag) {
        printf("Element not found in the array\n");
    }

    return 0;
}
/*
#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        // Check if target is present at mid
        if (arr[mid] == target) {
            return mid;
        }
        
        // If target is greater, ignore the left half
        if (arr[mid] < target) {
            left = mid + 1;
        }
        // If target is smaller, ignore the right half
        else {
            right = mid - 1;
        }
    }
    
    // Target is not present in the array
    return -1;
}

int main() {
    int arr[12] = {2, 3, 4, 10, 14, 18, 20, 25, 30, 35, 40, 45};
    int target;
    
    printf("Enter the element to search: ");
    scanf("%d", &target);
    
    int result = binarySearch(arr, 12, target);
    
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }
    
    return 0;
}
*/
