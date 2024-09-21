#include <stdio.h>
//factorial program using recursion method
    /*we know that we can write 
    factorial(n)=1*2*3*4*......*(n-1)*n 
    factorial(n-1)=1*2*3*4*......*(n-1) 
    factorial(n)= n * factorial(n-1) */
int factorial(int n){
    if(n==1 || n==0){ /* " base codition " for recursion program .
                      if we don't provide it it may continue till infinite */ 
        return 1;
    }
    return n * factorial(n-1);
}

int main(){
    int a;
    printf("enter any num for its factorial : \n");
    scanf("%d",&a);
    printf("factorial of  %d is \"%d\"  \n",a,factorial(a)); 
    return 0;
}