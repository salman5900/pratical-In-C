#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int len = strlen(str);
    int i;
    // Reverse the string
    for (i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char word[50];
    printf("Enter a word: ");
    scanf("%s", word);

    reverseString(word);
    printf("Reversed word: %s\n", word);

    return 0;
}
