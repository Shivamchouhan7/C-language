#include <stdio.h>

int main(){
    // POINTER ARITHMETIC
    // POINTER ARITHMETIC USING INTEGER POINTER
    int a=5;
    int* ptr1=&a; 
    printf("the address of a is %u \n",&a);
    printf("the address of a is %u \n",ptr1);
    ptr1++;  // Incrementing the pointer (this moves it to the next integer location)
    printf("the value of ptr1 after increament is %u \n",ptr1);

    // POINTER ARITHMETIC USING CHARACTER POINTER
    char b = 'A';
    char* ptr2=&b; 
    printf("the address of b is %u \n",&b);
    printf("the address of b is %u \n",ptr2);
    ptr2++;  // Incrementing the pointer (this moves it to the next character location)
    printf("the value of ptr2 after increament is %u \n",ptr2); 

    // POINTER ARITHMETIC USING FLOAT POINTER
    float c = 2.5;
    float* ptr3=&c; 
    printf("the address of c is %u \n",&c);
    printf("the address of c is %u \n",ptr3);
    ptr3++;  // Incrementing the pointer (this moves it to the next float location)
    printf("the value of ptr3 after increament is %u \n",ptr3);                

    return 0;
}