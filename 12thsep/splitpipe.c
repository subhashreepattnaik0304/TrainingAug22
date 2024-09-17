#include <stdio.h>
#include <string.h>

void reverseWords(char *str) {
    // Split the string by '|'
    char *words[100];
    int count = 0;
    char *token = strtok(str, "|");
    while (token != NULL) {
        words[count++] = token;
        token = strtok(NULL, "|");
    }

    // Print the words in reverse order
    for (int i = count - 1; i >= 0; i--) {
        printf("%s", words[i]);
        if (i > 0) {
            printf("|");
        }
    }
    printf("\n");
}

int main() {
    char str[] = "apple|banana|grape|orange";
    reverseWords(str);
    return 0;
}

