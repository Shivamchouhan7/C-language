#include <stdio.h>
#include <string.h>
/* a program to count the occurrence of a given character in a string*/
int main(){
    char string[]="hello brother how are you ?";
    char c;
    int i, count=0;
    printf("enter the character you want to check : \n");
    scanf(" %c",&c);
    for(i=0;i<strlen(string);i++){
        if(c==string[i]){
            count+=1;
        }
    }
    printf("\"%c\" occurs %d times in this string \n",c,count);
    return 0;
}