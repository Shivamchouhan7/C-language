#include <stdio.h>

int main(){
    int age;
    scanf("%d",&age);
    if(age>55){
        printf("you are a senior citizen and You can drive \n");
    }
    else if(age>=18){
        printf("You can drive\n");
    }
    else{
        printf("you cannot drive\n");
    }
    return 0;
} 