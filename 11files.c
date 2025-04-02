#include <stdio.h>

int main() {
    FILE *fp;
    char ch[100];

    // Open file in write mode
    fp = fopen("file1.txt", "w");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    // Writing to the file
    fprintf(fp, "Hello, World!");
    fclose(fp);  // Close the file after writing

    // Reopen the file in read mode
    fp = fopen("file1.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading\n");
        return 1;
    }

   

    // Appending new data to the file
    fp = fopen("file1.txt", "a");
    if (fp == NULL) {
        printf("Error opening file for appending\n");
        return 1;
    }
    fprintf(fp, "\nThis is appended data.");
    fclose(fp);  // Close the file after appending
    
    fp = fopen("file1.txt", "r");
     // Reading from file
     while (fgets(ch, sizeof(ch), fp) != NULL) {
        printf("%s", ch);
    }
    fclose(fp);  // Close the file after reading
    return 0;
}
