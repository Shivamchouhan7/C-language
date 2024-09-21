#include <stdio.h>
// function prototype
int sum(int,int);
//function definition
int sum(int x , int y){
    printf("sum is : %d \n",x+y);
    return x+y;/* here these return value is not stored or used.
     If we want to use the sum later, 
     we have to store it in a variable */
}

int main(){
    int a,b;
    printf("enter two number : \n");
    scanf("%d",&a);
    scanf("%d",&b);
    sum(a,b);// function calling 
    /* If you need the sum later in our program, we should store it in a variable 
    if we take output in another variable like c
    int c=sum(a,b);
    this is also function calling */
    return 0;
}