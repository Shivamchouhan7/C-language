#include <stdio.h>
/* program having variable i print the address of i 
pass this variable to a function 
and print its address and check whether this address are same and why */ 
int return_5(int* ptr){
    printf("\n the value of ptr is %d",ptr);
    printf("\n the value at ptr is %d",*ptr);
    return 5;

}

int main(){
    int i=5;
    int*ptr=&i;
    printf(" the address of variable i is %u",&i);
    return_5(ptr);
    return 0;
}