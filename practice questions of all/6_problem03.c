#include <stdio.h>

// Function to change the value of the variable to 3 times its current value
void change(int* a) {
    *a = 3 * (*a); // Dereference the pointer to change the value, 
}

int main() {
    int a = 2;         // Initialize variable a
    printf("The value of a is %d\n", a); // Print the initial value
    change(&a);       // Call the change function with the address of a
    printf("The value of a is %d\n", a); // Print the modified value
    return 0;
}
