#include <stdio.h>

int main(){
    //for print the multiplication table of given number in reverse order & taking input from user 
    int num;
    printf("enter any num for which you want to print the table : ");
    scanf("%d",&num);
    for(int i=10;i>=1;i--){
        printf("\n %d * %d = %d",num,i,num*i);
    } 
    return 0;
}