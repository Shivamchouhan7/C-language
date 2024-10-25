#include <stdio.h>
#include<stdlib.h>
//REALLOC() FUNCTION
int main(){
    int num=5;
    int *ptr;
    // Allocate memory using malloc
    ptr=(int*) malloc(num*sizeof(int));
    ptr=(int*) realloc(ptr,10*sizeof(int));//syntax for realloc() function 
    // now it store 10 integer
    for (int i = 0; i < 10; i++) {
        ptr[i] = (i+1) * 10; 
    }
    printf("Elements in the array:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d \n", ptr[i]);
    }
    // Free the allocated memory
    free(ptr);
    return 0;
}