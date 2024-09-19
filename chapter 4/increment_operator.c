#include <stdio.h>

int main(){
    int i=10;
    printf(" value of i is %d\n",i);
    printf("value of i is %d\n",i++);//here 10 is printed 
    // here first value is printed and then increament is done  [post increament]
    printf("value of i is %d\n",i); //now the value of i is 11 because increment is done 
    printf("value of i is %d\n",++i);//here 12
    // here first increament occurs and then value of i is printed [pre increament]
    return 0;
}