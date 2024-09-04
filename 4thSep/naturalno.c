#include <stdio.h>

int main() {
    int arr[10];

    // Initialize the array with the first 10 natural numbers
    for (int i = 0; i < 10; i++) {
        arr[i] = i + 1;
    }

    // Print the array elements
    printf("The first 10 natural numbers are:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\n ", arr[i]);
    }

    return 0;
}

