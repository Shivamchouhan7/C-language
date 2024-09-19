#include <stdio.h>

int main(){
    // sum of n natural number using while loop
    int num,sum=0;
    printf("enter num : ");
    scanf("%d",&num);
    while(num>0){
        sum=sum+num;
        num=num-1;
       // printf("\n%d",sum);
    }
    printf("\n%d",sum);
    return 0;
}