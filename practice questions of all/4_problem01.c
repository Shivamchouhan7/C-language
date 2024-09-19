#include <stdio.h>

int main(){
    //for print the  multiplication table of given number & taking input from user 
    int num;
    printf("enter any num for which you want to print the table : ");
    scanf("%d",&num);
    for(int i=1;i<=10;i++){
        printf("\n %d * %d = %d",num,i,num*i);
    } 
    return 0;
}