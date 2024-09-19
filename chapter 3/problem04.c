#include <stdio.h>

int main(){
    char a ;
    printf("enter any alphabet to check wheather the alphabet is upper case or lower case : ");
    scanf("%c",&a);
    if(a>=97 && a<=122){
        printf("%c is lower case and ascii value of %c is %d",a,a,a);
    }
    else if(a>=65 && a<=90){
         printf(" %c is upper case and ascii value of %c is %d",a,a,a);
    }
    else{
        printf("you entered the wrong character %c",a);
    }
    
    return 0;
}