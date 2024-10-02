#include <stdio.h>

// DECLARING A STRING USING POINTERS
int main() {
    // Declaring a string using a pointer to a string literal
    char *str = "Hello World!";
    
    // Printing the string using printf
    printf("%s\n", str); // You can also use puts(str);

    return 0;
}
