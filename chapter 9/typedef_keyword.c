#include <stdio.h>

// Define the structure
struct person {
    char name[50];
    int age;
};

// Create a typedef alias for the structure
typedef struct person p;//this typedef keyword is used here to creates an alias named P for this structure.

int main() {
    // Declare a variable of type 'p'
    p p1; // No 'struct' keyword needed here

    // Input name and age
    printf("Enter name: ");
    scanf("%s", p1.name);
    printf("Enter age: ");
    scanf("%d", &p1.age);

    // Display the values
    printf("Name: %s\nAge: %d\n", p1.name, p1.age);

    return 0;
}
