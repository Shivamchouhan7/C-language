#include <stdio.h>
// fibonacci series program using  recursion function
// fibonacci formula : fibonacci(n)=Fibonacci(n−1)+Fibonacci(n−2)
// 0,1,1,2,3,5,8,13,21,34,…
int fibonacci(int n){
    if(n==0 || n==1  ){
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int a;
    printf("Enter the position in the Fibonacci series: ");
    scanf("%d", &a);
    
    printf("The value of the Fibonacci series at position %d is: %d\n", a, fibonacci(a));
    
    return 0;
}