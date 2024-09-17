#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a node structure for the linked list
typedef struct Node {
    char *word;
    struct Node *next;
} Node;

// Function to create a new node
Node* createNode(const char *word) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        perror("Failed to allocate memory");
        exit(EXIT_FAILURE);
    }
    newNode->word = strdup(word);
    newNode->next = NULL;
    return newNode;
}

// Function to check if a word is already in the list
int isInList(Node *head, const char *word) {
    Node *current = head;
    while (current != NULL) {
        if (strcmp(current->word, word) == 0) {
            return 1; // Word found
        }
        current = current->next;
    }
    return 0; // Word not found
}

// Function to add a word to the list
void addToList(Node **head, const char *word) {
    if (isInList(*head, word)) {
        return; // Word is already in the list
    }
    Node *newNode = createNode(word);
    newNode->next = *head;
    *head = newNode;
}

// Function to print the list of words
void printList(Node *head) {
    Node *current = head;
    while (current != NULL) {
        printf("%s\n", current->word);
        current = current->next;
    }
}

// Free the memory allocated for the list
void freeList(Node *head) {
    Node *current = head;
    Node *nextNode;
    while (current != NULL) {
        nextNode = current->next;
        free(current->word);
        free(current);
        current = nextNode;
    }
}

int main() {
    char input[1024];
    Node *uniqueWords = NULL;

    printf("Enter a pipe-separated string: ");
    fgets(input, sizeof(input), stdin);

    // Remove newline character if present
    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    // Tokenize the string using pipe `|` as the delimiter
    char *token = strtok(input, "|");
    while (token != NULL) {
        addToList(&uniqueWords, token);
        token = strtok(NULL, "|");
    }

    // Print the unique words
    printf("Unique words:\n");
    printList(uniqueWords);

    // Free the allocated memory
    freeList(uniqueWords);

    return 0;
}

