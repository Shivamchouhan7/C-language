#include <stdio.h>

int main() {
    // Initialize a 3x2 array
    int array[3][2] = {{1, 2}, {3, 4}, {4, 5}};
    
    // Loop through each element of the array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", array[i][j]);  // Print each element in the same row
        }
        printf("\n");  // Move to the next line after printing a row
    }
    
    return 0;
}
