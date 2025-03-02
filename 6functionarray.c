#include <stdio.h>
#include <stdlib.h>  // For malloc()

// Function to sort the array (Bubble Sort)
void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    // Taking input for the number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Dynamic memory allocation for the array
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit with error
    }

    // Taking input for the array elements
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting the array
    sortArray(arr, n);

    // Displaying the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");  // Added newline for better readability

    // Free allocated memory
    free(arr);

    return 0;
}
