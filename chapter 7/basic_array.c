#include <stdio.h>

int main(){
    int array[2]={1,2};   // Initialize the array with two elements
    /* it can be initialize as
    int array[]={1,2};       without providing the size of array */
    // element in array can be input as 
    /* array[0]=1;
       array[1]=2;   */
    printf("the element of index 0 is %d and of 1 is %d",array[0],array[1]); // array starts from index 0
    return 0;
}