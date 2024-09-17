#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main() {
    // Array of pointers with dynamic memory allocation
    char *strings[3];
    // Allocate memory and copy strings
    strings[0] = (char *)malloc(6 * sizeof(char));
    strcpy(strings[0], "Hello");
 
    strings[1] = (char *)malloc(7 * sizeof(char));
    strcpy(strings[1], "People");
 
    strings[2] = (char *)malloc(17 * sizeof(char));
    strcpy(strings[2], "have a nice day");
 
    // Print strings
    for (int i = 0; i < 3; i++) {
        printf("%s\n", strings[i]);
    }
 
    // Free allocated memory
    for (int i = 0; i < 3; i++) {
        free(strings[i]);
    }
 
    return 0;
}
