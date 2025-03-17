#include <stdio.h>

int main() {
    int n;
    int i;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;  

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    printf("Array elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    
    printf("\n");
    return 0;
}
