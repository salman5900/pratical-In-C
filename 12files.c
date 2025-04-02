#include <stdio.h>

int main() {
    FILE *fp;
    // writing into a file
    fp = fopen("file2.txt", "w");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    fprintf(fp, "Hello, i am writing content into this file\n");
    fprintf(fp, "This is the second line\n");
    fclose(fp);

    // reading from a file and take count of characters
    int count = 0;
    char c;
    fp = fopen("file2.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    while ((c = fgetc(fp))!= EOF){
        count++;
    }
    fclose(fp);
    printf("Total number of characters in the file: %d\n", count);

    // reading from a file and take count of words

    int words = 0;
    fp = fopen("file2.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    char buffer[100];
    while (fscanf(fp, "%s", buffer) != EOF) {
        words++;
    }
    fclose(fp);
    printf("Total number of words in the file: %d\n", words);

    // reading from a file and take count of lines
    int lines = 0;
    fp = fopen("file2.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    while ((c = fgetc(fp))!= EOF) {
        if (c == '\n'){
            lines++;
        }
    }
    fclose(fp);
    printf("Total number of lines in the file: %d\n", lines);
    return 0;
}