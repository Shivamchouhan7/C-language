#include <stdio.h>

int main(){
    // program for factorial of any num using for loop

    int a,fac=1;
    printf("enter any number for factorial of it : ");
    scanf("%d",&a);
    for(int i=a;i>=1;i--){
        fac=fac*i;
    }
    printf("the factorial of \'%d\' is %d",a,fac);


    return 0;
}