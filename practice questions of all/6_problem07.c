#include <stdio.h>

/* Function  (pass by value) and verify that 
it cannot change the value of the variable to 3 times its current value*/
void change(int a) {
    a = 3 * a; // This changes only the local copy of a
}

int main() {
    int a = 2;         // Initialize variable a
    printf("The value of a is %d\n", a); // Print the initial value
    change(a);       // Call the change function, passing a by value
    printf("The value of a is %d\n", a); // Print the modified value
    return 0;
}
