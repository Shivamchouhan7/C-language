#include <stdio.h>

int main(){
    int y;
    printf("enter any year to check wheather it is leap year or not : ");
    scanf("%d",&y);
    if((y%4==0 ) ||(y%100!=0|| y%400==0)){
        printf("%d a leap year ",y);
    }
    else{
        printf("%d is not a leap year ",y);
    }
    return 0;
}