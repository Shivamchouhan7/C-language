#include <stdio.h>

int main(){
    int a,b;
    scanf("%d",a);
    scanf("%d",b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("result is %d ",a);
    printf("result %d ",b);
    return 0;
}