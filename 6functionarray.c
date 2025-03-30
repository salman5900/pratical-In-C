#include <stdio.h>


// Function to sort the array (Bubble Sort)
void sortArray(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
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
    int n, i;
    int arr[100];  

    // Taking input for the number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);



    // Taking input for the array elements
    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting the array
    sortArray(arr, n);

    // Displaying the sorted array
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");  // Added newline for better readability

    return 0;
}
