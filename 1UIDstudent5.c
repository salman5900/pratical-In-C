#include <stdio.h>

struct Student {
    char name[50];
    int UID;
    float marks[5];
    float total;
};

void sortStudents(struct Student students[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].total < students[j + 1].total) {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("Enter name, UID and marks of 5 subjects for student %d:\n", i + 1);
        scanf("%s %d", students[i].name, &students[i].UID);
        students[i].total = 0;
        for (int j = 0; j < 5; j++) {
            scanf("%f", &students[i].marks[j]);
            students[i].total += students[i].marks[j];
        }
    }

    sortStudents(students, n);

    printf("\nRank List:\n");
    for (int i = 0; i < n; i++) {
        printf("Rank %d: %s (UID: %d, Total: %.2f)\n", i + 1, students[i].name, students[i].UID, students[i].total);
    }

    return 0;
}
