#include <stdio.h>

int main(){
    char i='A';
    char* j=&i;// j is pointer pointing to i . j now holds the address of i and j is a character pointer
    // similarly for float 
    float a=3.25;
    float* b=&a; // b is pointer pointing to a . b now holds the address of a and b is a float pointer
    printf("the address of i is %p\n",&i);/* here in place of %p (give address in hexadecimal) we can use 
    %u (which is for unsigned integer )for integer value of address 
    printf("\n the address of i is %u",&i); example */
    printf("the value at address j is %d\n",*j);// use "&"  to get the address of a variable for pointers.
    printf("the address of a is %p\n",&a);
    printf("the value at address b is %d\n",*b);
    return 0;
}