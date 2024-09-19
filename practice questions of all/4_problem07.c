#include <stdio.h>

int main(){
    int num=8,i,sum=0;
    //to print the sum of element of table of 8
    for(int i=1;i<=10;i++){
        sum=sum+(num*i);
        printf("\n %d * %d = %d",num,i,num*i);
    } printf("\n%d",sum);
    
    return 0;
}