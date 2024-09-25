#include <stdio.h>
/*program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main().*/
int* sum(int x,int y){
    int s=x+y;
    int* ptr=&s;
    printf("the sum is %d",s);
    return ptr;
}
float* avg(int x,int y){
    float a=(x+y)/2.0;
    float* ptr=&a;
    printf("\n the avg is %.2f",a);
    return ptr;
}
int main(){
    int a=5;
    int b=6;
    int* ptr1=sum(a,b);
    float* ptr2=avg(a,b);
    
    return 0;
}