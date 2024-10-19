#include <stdio.h>
/* a function ‘sumVector’ which returns the sum of two vectors passed to it.
The vectors must be two–dimensional.*/
// Define a structure to represent a 2D vector
struct vector_2d {
    int i; // x component
    int j; // y component
};

// Function to sum two vectors
struct vector_2d sumVector(struct vector_2d a, struct vector_2d b) {
    struct vector_2d result;
    result.i = a.i + b.i; // Sum x components
    result.j = a.j + b.j; // Sum y components
    return result;
}

int main() {
    struct vector_2d vector[2];

    // Input for the first vector
    printf("Enter the components of the first vector (i j): \n");
    scanf("%d %d", &vector[0].i, &vector[0].j);

    // Input for the second vector
    printf("Enter the components of the second vector (i j): \n");
    scanf("%d %d", &vector[1].i, &vector[1].j);

    // Calculate the resultant vector
    struct vector_2d sum = sumVector(vector[0], vector[1]);

    // Output the resultant vector
    printf("Resultant vector is %di + %dj\n", sum.i, sum.j);

    return 0;
}
