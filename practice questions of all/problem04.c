#include <stdio.h>

int main(){
    int s,p,r,t;
    printf("enter the principle value :");
    scanf("%d",&p);
    printf("enter the rate value :");
    scanf("%d",&r);
    printf("enter the value time :");
    scanf("%d",&t);
    s=(p*r*t)/100;
    printf("the simple interest is %d",s);
    return 0;
}