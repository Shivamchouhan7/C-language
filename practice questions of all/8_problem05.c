#include <stdio.h>

/* A program to encrypt a string by adding 1 to the ASCII value of its characters. */
void encrypt(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        str[i] += 1; // Increment the ASCII value by 1
        i++;
    }
}

int main() {
    char string[] = "hello brother"; // Original string

    puts(string); // Print original string
    encrypt(string); // Encrypt the string
    puts(string); // Print encrypted string

    return 0;
}
