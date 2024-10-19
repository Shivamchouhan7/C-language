#include <stdio.h>

// Define a structure to represent a 2D vector
struct vector_2d {
    int i; // x component
    int j; // y component
};

int main() {
    struct vector_2d vector;

    printf("Enter the components of the vector (i j): \n");
    scanf("%d %d", &vector.i, &vector.j);

    // Output the vector
    printf("Given vector is %di + %dj\n", vector.i, vector.j);

    return 0;
}
