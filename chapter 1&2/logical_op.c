#include <stdio.h>

int main(){
     int a=5;
    if(a>1 && a<10){ //here && is logical operator
         printf("Your number is in b/w 1 to 10 \n");
     }
     if (a>3 || a<9){ //here || is logical operator
         printf("Your number is also in b/w 3 to 9 \n"); 
     
     }
    if(!(a==6)){ //here ! is logical operator
        printf("Your number is not  \"6\"\n");
     }
    return 0;
}