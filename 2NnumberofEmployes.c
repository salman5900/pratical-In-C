#include <stdio.h>

struct Employee {
    char name[50];
    int empID;
    float salary;
};

int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct Employee emp[n];

    for (int i = 0; i < n; i++) {
        printf("Enter name, employee ID and salary of employee %d:\n", i + 1);
        scanf("%s %d %f", emp[i].name, &emp[i].empID, &emp[i].salary);
    }

    printf("\nEmployee Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Employee ID: %d, Salary: %.2f\n", emp[i].name, emp[i].empID, emp[i].salary);
    }

    return 0;
}
