#include <stdio.h>

int main(){
    for(int i=1;i<=15;i++){
        if(i==5){
        continue;/*here continue work when i become 5 and it leaves below code and
         re execute the loop or this iteration when i=5 it is skiped */
        }
        printf(" value of i is %d \n ",i);
    }
    printf("for loop is done ");
    
    return 0;
}