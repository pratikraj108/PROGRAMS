#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int n, int key) {
    int low = 0;
    int high = n - 1;
    
    while (low <= high) {
        int mid = (low + high )/ 2;
        
        // Check if target is present at mid
        if (arr[mid] == key) {
            return mid;
        }
        
        // If target is greater, ignore the left half
        if (arr[mid] < key) {
            low = mid + 1;
        }
        // If target is smaller, ignore the right half
        else {
            high = mid - 1;
        }
    }
    
    // Target is not present in the array
    return -1;
}

int main() {
    int arr[12];
    int key;
    printf("Enter the value of elements: \n");
    for (int i = 0; i < 12; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the number to search: ");
    scanf("%d", &key);
    
    int result = binarySearch(arr, 12, key);
    
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array");
    }
    
    return 0;
}