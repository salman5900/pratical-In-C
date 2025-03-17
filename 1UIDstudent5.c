#include <stdio.h>

#define MAX 100  // Maximum number of students
#define SUBJECTS 5  // Number of subjects

struct Student {
    char name[50];
    int uid;
    float marks[SUBJECTS];  // Array to store marks of 5 subjects
};

int main() {
    struct Student std[MAX];  // Declare array inside main to follow C99 standards
    int n, i, j;  // Declare loop variables at the start (C90 restriction)

    // Get the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    if (n > MAX) {
        printf("Maximum limit is %d students.\n", MAX);
        return 1;  // Exit if input exceeds limit
    }

    // Input details for each student
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", std[i].name);
        printf("UID: ");
        scanf("%d", &std[i].uid);

        // Input marks for 5 subjects
        for (j = 0; j < SUBJECTS; j++) {
            do {
                printf("Enter marks for subject %d (0-100): ", j + 1);
                scanf("%f", &std[i].marks[j]);
                if (std[i].marks[j] < 0 || std[i].marks[j] > 100) {
                    printf("Invalid marks. Please enter marks between 0 and 100.\n");
                }
            } while (std[i].marks[j] < 0 || std[i].marks[j] > 100);
        }
    }

    // Display student details
    printf("\nStudent Details:\n");
    for (i = 0; i < n; i++) {
        printf("Student %d: Name: %s, UID: %d, Marks: ", i + 1, std[i].name, std[i].uid);
        for (j = 0; j < SUBJECTS; j++) {
            printf("%.2f ", std[i].marks[j]);
        }
        printf("\n");
    }

    return 0;
}
