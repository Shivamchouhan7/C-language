#include <stdio.h>

int main(){
    int i=72;
    int* ptr1=&i;// ptr2 is pointer pointing to i . ptr1 now holds the address of i and ptr1 is an integer pointer 
    int** ptr2=&ptr1;// ptr2 is pointer pointing to ptr1 . ptr2 now holds the address of ptr1 and ptr2 is an integer pointer 
    printf("the value of i is %d\n",*ptr1);
    printf("the value of i is %d\n",**ptr2);

    return 0;
}