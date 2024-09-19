#include <stdio.h>

int main(){
    // sum of n natural number using do while loop
    int num,i=1,sum=0;
    printf("enter num :");
    scanf("%d",&num);
    do{
        sum=sum+i;
        i++;
    } while (i <= num);
    printf("%d",sum);
    return 0;
}