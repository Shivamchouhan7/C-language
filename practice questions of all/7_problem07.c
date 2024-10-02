#include <stdio.h>

// Create a three-dimensional array and print the address of its elements in increasing order.
int main() {
    int array[2][2][3];

    // Fill the 3D array with user input
    for (int i = 0; i < 2; i++) {
        printf("Enter elements for layer %d:\n", i);
        for (int j = 0; j < 2; j++) {
            printf("Enter elements of row %d:\n", j);
            for (int k = 0; k < 3; k++) {
                printf("Element [%d][%d][%d]: ", i, j, k);
                scanf("%d", &array[i][j][k]);
            }
        }
    }

    // Print the addresses of the elements in increasing order
    printf("\nAddresses of the elements in increasing order:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 3; k++) {
                printf("Address of array[%d][%d][%d]: %p\n", i, j, k, (void*)&array[i][j][k]);//for address output in unsigned integer use %u in place of %p
            }
        }
    }

    return 0;
}
