#include <stdio.h>

// Function to find the sum of the first n natural numbers
int sum_natural(int n) {
    if (n == 0 || n==1) {
        return n; // Base case: sum of first 0 natural numbers is 0 and sum of first 1 natural numbers is 1
    }
    return n + sum_natural(n - 1); // Recursive case
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
        printf("The sum of natural numbers up to %d is %d\n", num, sum_natural(num));
    }
    
    return 0;
}
