#include <stdio.h>

int main(){
    int array[5];   // Initialize the array of size 5
    printf("enter the elements of array :\n");
    scanf(" %d",&array[0]);
    scanf(" %d",&array[1]);
    scanf(" %d",&array[2]);
    scanf(" %d",&array[3]);
    scanf(" %d",&array[4]);
    // prints the elements of array at index 0 and 1
    printf("the element of index 0 is %d and of 1 is %d",array[0],array[1]); // array starts from index 0
    return 0;
}