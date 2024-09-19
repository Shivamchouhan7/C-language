#include <stdio.h>

int main(){
    // program for factorial of any num using while loop
    int a,fac=1;
    printf("enter any number for factorial of it : ");
    scanf("%d",&a);
    int i=a;
    while(i>0){
        fac*=i;
        i--;
    }
    printf("the factorial of %d is %d",a,fac);
    return 0;
}