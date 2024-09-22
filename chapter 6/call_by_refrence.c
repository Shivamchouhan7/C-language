#include <stdio.h>
//creating function 
int sum(int* x , int* y){
    *x=6;/*sum function  change value of 'a' using 'x' because here address of a is provided to x . 
    and it print sum using value 6*/
    return *x+*y;
    }

int main(){
    int a=1,b=2;
    printf("the sum is %d :",sum(&a,&b));
    printf("\n the value of a is %d",a);
    return 0;
}