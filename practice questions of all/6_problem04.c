#include <stdio.h>
// program to write function and pass the value by refrence
int func(int* ptr){
    *ptr=10;
    return 0;
} 
int main(){
    int a=6;
    int* ptr=&a;
    printf("\n the value of a is %d",a);
    func(&a);
    printf("\n the value of a is %d",a);
    return 0;
}