#include <stdio.h>

int main(){//prime number program using while loop
    int n;
    int not_prime=0;
    printf("enter any num : ");
    scanf("%d",&n);
    if(n==0 || n==1){
        printf(" the num is not prime\n");
    }
    else{
        int i=2;
        while (i<n)
        {
            if (n%i==0){
            not_prime = 1;
            break; 
            } 
            i++;
            
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