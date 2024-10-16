#include <stdio.h>
#include <string.h>
/* program to check whether a given character is present in a string or not*/
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
    if(count==0){
        printf("Sorry character entered by you is not present in this string  ^_^ \n");
    }
    else{
    printf("\"%c\" occurs %d times in this string.\n", c, count);
    }
    return 0;
}