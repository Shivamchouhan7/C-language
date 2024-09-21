#include <stdio.h>

// Function prototype
int sum(int, int);

// Function definition
int sum(int x, int y) {
    return x + y; // Returns the sum
    //return will execute because we store the sum in variable c
}

int main() {
    int a, b;
    printf("Enter two numbers: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    
    int c = sum(a, b); // Store the returned sum
    printf("Sum is: %d\n", c); // Print the returned value
    
    return 0;
}
