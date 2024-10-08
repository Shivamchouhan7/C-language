#include <stdio.h>

/* a program to decrypt the string. */
void encrypt(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        str[i] -= 1; // decrement the ASCII value by 1
        i++;
    }
}

int main() {
    char string[] = "ipx!bsf!zpv"; // Original string

    puts(string); // Print original string
    encrypt(string); // Encrypt the string
    puts(string); // Print decrypted string

    return 0;
}
