#include <stdio.h>
/*Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points
to the third element where ptr is a pointer pointing to the first element of the 
array*/

int main(){
    int array[]={1,2,3,4,5,6,7,8,9,10};
    int* ptr =array;//ptr is a pointer pointing to the first element of the array
    //print 1st element of array 
    printf("the 1st value of array is %d\n",*ptr);
    // Print the third element using pointer arithmetic
    printf("the 3rd value of array is %d\n",*(ptr+2));//
    
    return 0;
}