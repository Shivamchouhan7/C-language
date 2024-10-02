#include <stdio.h>
//GETS() AND PUTS()
int main(){
    char string[5];
    printf("enter your string : \n");
    gets(string);//for taking input from user and store in string
    puts(string);//for printing the string
    printf("%s",string);
    /*puts() automatically adds a newline after printing the string, while printf("%s", string); does not.*/
    
    return 0;
}