#include <stdio.h>
#include<stdlib.h>
//MALLOC() FUNCTION 
int main(){
    int num;
    int *ptr;
    printf("Enter size of array \n");
    scanf(" %d",&num);
    // int array[num]; not allowed in c
    // Allocate memory using malloc
    ptr=(int*) malloc(num*sizeof(int));//syntax for malloc() function.
    // Initialize the array 
    for (int i = 0; i < num; i++) {
        ptr[i] = (i+1) * 10; 
    }

    // Print first element and others
    printf("First element: %d\n", ptr[0]);
    printf("Elements in the array:\n");
    for (int i = 0; i < num; i++) {
        printf("%d \n", ptr[i]);
    }
    // Free the allocated memory
    free(ptr);
    return 0;
}