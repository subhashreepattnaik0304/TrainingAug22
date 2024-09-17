#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to compare the lengths of two strings
int compare(const void *a, const void *b) {
    const char *strA = *(const char **)a;
    const char *strB = *(const char **)b;
    return strlen(strA) - strlen(strB);
}

// Function to split the string by pipe and sort the words
void sortWordsByLength(char *str) {
    char *words[100]; // Array to hold the words
    int count = 0;

    // Split the string by '|'
    char *token = strtok(str, "|");
    while (token != NULL) {
        words[count++] = token;
        token = strtok(NULL, "|");
    }

    // Sort the words by their length
    qsort(words, count, sizeof(char *), compare);

    // Print the sorted words
    for (int i = 0; i < count; i++) {
        printf("%s", words[i]);
        if (i < count - 1) {
            printf("|");
        }
    }
    printf("\n");
}

int main() {
    char str[] = "apple|banana|kiwi|grape|orange|fig";
    sortWordsByLength(str);
    return 0;
}

