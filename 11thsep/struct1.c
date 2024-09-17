#include <stdio.h>

// Define the structure
struct Student {
    char name[50];
    int age;
    float grade;
};

int main() {
    struct Student student;

    // Take input from the user
    printf("Enter name: ");
    fgets(student.name, sizeof(student.name), stdin);

    printf("Enter age: ");
    scanf("%d", &student.age);

    printf("Enter grade: ");
    scanf("%f", &student.grade);

    // Print the values
    printf("\nStudent Details:\n");
    printf("Name: %s", student.name);
    printf("Age: %d\n", student.age);
    printf("Grade: %.2f\n", student.grade);

    return 0;
}

