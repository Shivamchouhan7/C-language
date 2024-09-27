#include <stdio.h>

int main() {
    int array[5];

    // tell user to enter elements for the array
    printf("Enter 5 elements for the array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]); 
    }

    // Print the elements of index 0 and 1
    printf("The element at index 0 is %d and at index 1 is %d\n", array[0], array[1]); 

    return 0;
}
