#include <stdio.h>
// an array of size 3 x 10 containing multiplication tables of the numbers 2,7 and 9 respectively
int main() {
    int table[3][10];
    int numbers[] = {2, 7, 9};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
            table[i][j] = numbers[i] * (j + 1);
        }
    }

    // Print the multiplication tables
    for (int i = 0; i < 3; i++) {
        printf("Multiplication Table for %d:\n", numbers[i]);
        for (int j = 0; j < 10; j++) {
            printf("%d * %d = %d\n", numbers[i], j + 1, table[i][j]);
        }
        printf("\n");
    }

    return 0;
}
