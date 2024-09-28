#include <stdio.h>
/*a program to create an array of 10 integers and
 store multiplication table of 5 in it.*/

int main(){
    int multiplication[10];
    for (int i = 0; i <10; i++){
        multiplication[i]=5*(i+1);
    }
    for (int i = 0; i <10; i++){
        printf("the value of 5*%d is %d \n",i+1,multiplication[i]);
    }

    
    
    return 0;
}