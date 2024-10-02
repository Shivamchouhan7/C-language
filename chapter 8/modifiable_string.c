#include <stdio.h>

// MODIFIABLE STRING
int main() {
    char string[] = "hello world"; // Declaring a modifiable string as a character array

    puts(string);                  // Printing the original string

    string[0] = 'H';               // Modifying the first character to 'H'
    puts(string);                  // Printing the modified string

    return 0;                      
}
