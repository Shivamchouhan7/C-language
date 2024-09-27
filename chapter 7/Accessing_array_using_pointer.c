#include <stdio.h>

int main(){
    int array[]={55,66,85,75,45};
    int* ptr = &array[0]; /* pointer ptr pointing 1st element of array 
     and it is same as 
    int* ptr = array */
    for (int i = 0; i <5; i++)
    {
        printf(" the value at index %d is %d\n",i,array[i]);
        printf(" the value at index %d is %d\n",i,*ptr);//accessing values of array using ptr
        ptr++; //incrementing ptr 
        
    }
    
    
    return 0;
}