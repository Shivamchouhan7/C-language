#include <stdio.h>

int main(){
    int i=72;
    int* j=&i;// j is pointer pointing to i . j now holds the address of i and j is an integer pointer 
    printf("the address of i is %p\n",&i);/* here in place of %p (give address in hexadecimal) we can use 
    %u (which is for unsigned integer )for integer value of address 
    printf("\n the address of i is %u",&i); example */
    printf("the value at address j is %d\n",*j);// use "&"  to get the address of a variable for pointers.

    return 0;
}