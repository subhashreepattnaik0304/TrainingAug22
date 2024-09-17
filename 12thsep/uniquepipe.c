#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_WORDS 100
#define MAX_WORD_LENGTH 50

// Function to check if a word is unique
int isUnique(char words[MAX_WORDS][MAX_WORD_LENGTH], int count, char *word) {
    for (int i = 0; i < count; i++) {
        if (strcmp(words[i], word) == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str[] = "apple|banana|apple|orange|banana|grape";
    char words[MAX_WORDS][MAX_WORD_LENGTH];
    int count = 0;

    // Tokenize the string using '|' as the delimiter
    char *token = strtok(str, "|");
    while (token != NULL) {
        // Check if the word is unique
        if (isUnique(words, count, token)) {
            strcpy(words[count], token);
            count++;
        }
        token = strtok(NULL, "|");
    }

    // Print the unique words
    printf("Unique words:\n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
