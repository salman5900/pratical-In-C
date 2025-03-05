#include <stdio.h>

#define MAX 100  // Maximum number of students
#define SUBJECTS 5  // Number of subjects

// Define the structure and declare the array globally
struct Student {
    char name[50];
    int uid;
    float marks[SUBJECTS];  // Array to store marks of 5 subjects
} std[MAX];  // Global array of students

int main() {
    int n;

    // Get the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    if (n > MAX) {
        printf("Maximum limit is %d students.\n", MAX);
        return 1;  // Exit if input exceeds limit
    }

    // Input details for each student
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", std[i].name);
        printf("UID: ");
        scanf("%d", &std[i].uid);

        // Input marks for 5 subjects
        for (int j = 0; j < SUBJECTS; j++) {
            printf("Enter marks for subject %d: ", j + 1);
            scanf("%f", &std[i].marks[j]);
        }
    }

    // Display student details
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: Name: %s, UID: %d, Marks: ", i + 1, std[i].name, std[i].uid);
        for (int j = 0; j < SUBJECTS; j++) {
            printf("%.2f ", std[i].marks[j]);
        }
        printf("\n");
    }

    return 0;
}
