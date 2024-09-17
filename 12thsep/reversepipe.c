#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverse(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

// Function to reverse each word in the pipe-separated string
void reverseWords(char *str) {
    char *word_start = str;
    char *temp = str; // Temp pointer to traverse the string

    while (*temp) {
        temp++;
        if (*temp == '|' || *temp == '\0') {
            reverse(word_start, temp - 1);
            word_start = temp + 1;
        }
    }
}

int main() {
    char str[] = "apple|banana|grape";
    printf("Original string: %s\n", str);
    reverseWords(str);
    printf("Reversed string: %s\n", str);
    return 0;
}

