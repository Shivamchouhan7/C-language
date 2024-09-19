#include <stdio.h>

int main(){
    int i=0;
    do{
        printf("condition is true & value of i is %d \n",i);//this only print when condition of while is true 
        i++;
    }while(i<2);
    return 0;
}