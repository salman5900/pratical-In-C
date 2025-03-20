#include <stdio.h>

#define MAX 100  // Maximum number of students
#define SUBJECTS 5  // Number of subjects

struct Student {
    char name[50];
    int uid;
    float marks[SUBJECTS];  // Array to store marks of 5 subjects
    float total;  // Total marks
    int rank;  // Rank of the student
};

int main() {
    struct Student std[MAX];  
    int n, i, j;  

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

        std[i].total = 0; // Initialize total marks to 0

        // Input marks for 5 subjects
        for (j = 0; j < SUBJECTS; j++) {
            do {
                printf("Enter marks for subject %d (0-100): ", j + 1);
                scanf("%f", &std[i].marks[j]);
                if (std[i].marks[j] < 0 || std[i].marks[j] > 100) {
                    printf("Invalid marks. Please enter marks between 0 and 100.\n");
                }
            } while (std[i].marks[j] < 0 || std[i].marks[j] > 100);

            std[i].total += std[i].marks[j]; // Add marks to total
        }
    }

    // Sorting Students based on Total Marks (Descending Order)
    struct Student temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (std[i].total < std[j].total) {
                temp = std[i];
                std[i] = std[j];
                std[j] = temp;
            }
        }
    }

    // Assign ranks
    for (i = 0; i < n; i++) {
        std[i].rank = i + 1;  // Assign rank based on sorted order
    }

    // Display student details with ranks
    printf("\nStudent Details with Ranks:\n");
    for (i = 0; i < n; i++) {
        printf("Rank %d: Name: %s, UID: %d, Total Marks: %.2f, Marks: ", std[i].rank, std[i].name, std[i].uid, std[i].total);
        for (j = 0; j < SUBJECTS; j++) {
            printf("%.2f ", std[i].marks[j]);
        }
        printf("\n");
    }

    return 0;
}
