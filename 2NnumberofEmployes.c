#include <stdio.h>

#define MAX 100  // Maximum number of employees

// Define Employee Structure
struct Employee {
    char name[50];
    int emp_id;
    float salary;
} emp[MAX];  // Array to store up to MAX employees

int main() {
    int n;  // Number of employees

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter Name:\n");
        scanf(" %[^\n]", emp[i].name);

        printf("Enter Employee ID:\n");
        scanf("%d", &emp[i].emp_id);

        printf("Enter Salary:\n");
        scanf("%f", &emp[i].salary);
    }

    printf("\nEmployee Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s\n", emp[i].name);
        printf("ID: %d\n", emp[i].emp_id);
        printf("Salary: %.2f\n", emp[i].salary);
        printf("\n"); 
    }

    return 0;
}
