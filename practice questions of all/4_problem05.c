#include <stdio.h>

int main(){
    // sum of n natural number using for loop 
    int num,sum=0;
    printf("enter num : ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        sum=sum+i;
    }
    printf("\n%d",sum);
    return 0;
}