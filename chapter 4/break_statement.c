#include <stdio.h>

int main(){
    for(int i=1;i<=15;i++){
        printf(" value of i is %d \n ",i);
        if(i==5){
            break;/*here break work when i become 5 and loop is not continue after this and 
            the control is send outside the loop */ 
        }
    }
    printf("for loop is done ");
    
    return 0;
}