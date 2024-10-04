#include <stdio.h>
#include <string.h>
// program to take string as an input from the user using %c and %s confirm that the strings are equal
int main() {
    char str1[6]; // Array for the first string (5 characters + null terminator)
    char str2[6]; // Array for the second string (5 characters + null terminator)

    // Input the first string character by character
    printf("Enter first string (max 5 characters): ");
    for (int i = 0; i < 5; i++) {
        scanf(" %c", &str1[i]); 
    }
    str1[5] = '\0'; // Null-terminate the first string

    // Input the second string using %s
    printf("Enter another string (max 5 characters): ");
    scanf("%5s", str2); // Limit input to 5 characters and null-terminate

    // Compare the two strings
    if (strcmp(str1, str2) == 0) {
        printf("\nBoth strings are the same.\n");
    } else {
        printf("\nBoth strings are different.\n");
    }

    // Print both strings
    printf("First string: %s\n", str1);
    printf("Second string: %s\n", str2);

    return 0;
}
