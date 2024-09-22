#include <stdio.h>
//swaping of number by passing address of them 
void swap(int* a, int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=1,b=2;
    swap(&a,&b);
    printf("now a is  %d and b is %d",a,b);
    return 0;
}