#include <stdio.h>

// Define the structure
struct data {
    int amount;
};

int main() {
    struct data a1;          // Create an instance of the structure
    a1.amount = 50000; 

    struct data *ptr;       // Declare a pointer to the structure
    ptr = &a1;              // Assign the address of a1 to the pointer

    // Accessing the amount using pointer dereferencing
    printf("The amount is %d \n", (*ptr).amount); // Using dereferencing
    printf("The amount is %d \n", ptr->amount);   // Using the arrow operator,exactly works same as (*ptr).amount

    return 0;
}
