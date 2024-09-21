#include <stdio.h>
// program to find average of three num using function 
float avg(int a,int b ,int c ){
    return (a+b+c)/3.0;
}

int main(){
    int a,b,c;
    printf("enter any three numbers : \n ");
    scanf("%d %d %d",&a,&b,&c);
    printf("the average of %d ,%d and %d is %f",a,b,c,avg(a,b,c));
    return 0;
}