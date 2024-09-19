#include <stdio.h>

int main(){//prime number program using for loop
    int n;
    int not_prime=0;
    printf("enter any num : ");
    scanf("%d",&n);
    if(n==0 || n==1){
        printf(" the num is not prime\n");
    }
    else{
        for (int i=2;i<n;i++){
        if (n%i==0){
        not_prime = 1;
        }
    }
    if(not_prime){
        printf(" the num is not prime\n");
    }
    else{
        printf(" the num is prime\n");
    }
    }
    
    return 0;
}