#include <stdio.h>

// Program to generate multiplication table of a given number in text
int main() {
    FILE *ptr;
    int num;
    // Ask the user for the number
    printf("Enter a number to generate its multiplication table: ");
    scanf("%d", &num);
    ptr = fopen("problem02.txt", "w");

    for (int i = 0; i < 10; i++) { // Initialize i to 0
        fprintf(ptr, "%d\n", num * (i + 1)); // Write to file and move to next line
    }
    printf("table of %d is stored succesfully \n",num);
    fclose(ptr);
    return 0;
}
