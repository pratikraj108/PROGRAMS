# Program to implement Merge Sort, Selection Sort, Insertion Sort


def merge_sort(arr):
    if len(arr) <= 1:
        return arr

    mid = len(arr) // 2
    left  = merge_sort(arr[:mid])   # Sort left half
    right = merge_sort(arr[mid:])   # Sort right half

    return merge(left, right)

def merge(left, right):
    result = []
    i = j = 0

    # Compare and merge
    while i < len(left) and j < len(right):
        if left[i] <= right[j]:
            result.append(left[i])
            i += 1
        else:
            result.append(right[j])
            j += 1

    result += left[i:]   # Add remaining elements
    result += right[j:]
    return result

def selection_sort(arr):
    n = len(arr)
    for i in range(n):
        min_idx = i                        # Assume current is minimum

        for j in range(i + 1, n):
            if arr[j] < arr[min_idx]:
                min_idx = j                # Find actual minimum

        arr[i], arr[min_idx] = arr[min_idx], arr[i]  # Swap
    return arr


def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]       # Current element to insert
        j = i - 1

        # Shift elements greater than key to right
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1

        arr[j + 1] = key   # Place key in correct position
    return arr



original = [64, 25, 12, 22, 11, 90, 38, 47]
print("Original Array:", original)

# Merge Sort
result = merge_sort(original.copy())
print("\n--- Merge Sort ---")
print("Sorted Array:", result)

# Selection Sort
result = selection_sort(original.copy())
print("\n--- Selection Sort ---")
print("Sorted Array:", result)

# Insertion Sort
result = insertion_sort(original.copy())
print("\n--- Insertion Sort ---")
print("Sorted Array:", result)