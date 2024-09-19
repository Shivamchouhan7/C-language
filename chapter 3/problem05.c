#include <stdio.h>

int main(){
    int a,b,c,d;
    printf("enter 4 number to check which one is greater \n ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b && a>c && a>d){
        printf(" \'a\' is greater ");
    }
    else if(a>b && a>c && a>d){
        printf(" \'b\' is greater ");
    }
    else if(a>b && a>c && a>d){
        printf(" \'c\' is greater ");
    }
    else {
        printf(" \'d\' is greater ");
    }

    return 0;
}