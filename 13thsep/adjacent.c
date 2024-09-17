#include <stdio.h>
#include <string.h>

void removeAdjacentDuplicates(char *str) {
    int n = strlen(str);
    if (n < 2) return;

    int j = 0;
    for (int i = 1; i < n; i++) {
        if (str[j] != str[i]) {
            j++;
            str[j] = str[i];
        }
    }
    str[j + 1] = '\0';
}

int main() {
    char str[100];
    printf("Enter a word: ");
    scanf("%s", str);

    removeAdjacentDuplicates(str);

    printf("Result: %s\n", str);
    return 0;
}
