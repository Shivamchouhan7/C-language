#include <stdio.h>

int main(){
    int array[5];
    int* ptr = array;/* The line int* ptr = &array; 
                        should be int* ptr = array;. 
                        The array name itself can be used as a pointer to its first element.*/
    // Arrays in C are stored as contiguous blocks of memory                     
    for(int i=0;i<5;i++){
        printf("the address of value at index %d is %d\n ",i,&array[i]);
    }
    return 0;
}