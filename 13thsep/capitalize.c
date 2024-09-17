#include <stdio.h>
#include <ctype.h>
#include <string.h>

void capitalizeLastLetter(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if ((i == len - 1 || str[i + 1] == ' ') && str[i] != ' ') {
            str[i] = toupper(str[i]);
        }
    }
}

int main() {
    char sentence[100];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    size_t length = strlen(sentence);
    if (sentence[length - 1] == '\n') {
        sentence[length - 1] = '\0';
    }

    capitalizeLastLetter(sentence);

    printf("Modified sentence: %s\n", sentence);

    return 0;
}
