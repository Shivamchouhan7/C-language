#include <stdio.h>
// program to read three integers from a file. 
int main(){
    int num1,num2,num3;
    FILE *ptr;
    ptr=fopen("problem01.txt","r");
    fscanf(ptr,"%d %d %d",&num1,&num2,&num3);
    printf("the numbers are: %d %d %d",num1,num2,num3);
    return 0;
}