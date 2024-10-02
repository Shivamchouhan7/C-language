#include <stdio.h>
// UNMODIFIABLE STRING 
int main() {
    // Declaring an unmodifiable string using a pointer to a string literal
    const char *string = "hello"; // Using 'const' to indicate it should not be modified
    /* it is also done by--> Constant Character Array
     const char string[] = "hello"; 
     Prevents modification while keeping the string in an array*/

    // Printing the original string
    puts(string);

    // Attempting to modify the string (this will lead to undefined behavior)
    // Uncommenting the following line will cause a runtime error
    // string[0] = 'H'; // This is illegal and leads to undefined behavior

    return 0;
}
