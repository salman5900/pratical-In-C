// Compute Sum of Array Elements Using Pointers
#include <stdio.h>

// Function to compute sum using pointers
int computeSum(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    int sum = computeSum(arr, n);
    printf("Sum of array elements: %d\n", sum);

    return 0;
}
