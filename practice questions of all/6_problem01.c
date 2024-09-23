#include <stdio.h>
// program to print address of the variable and print the value using this address

int main(){
    int a=5;
    int* ptr=&a;// pointer ptr pointing to a
    printf(" the address of variable a is %d",ptr);
    printf("\n the value of variable a is %u",*ptr);//this prints value of a using pointer ptr
    return 0;
}