#include <stdio.h>
//INITIALIZING STRINGS
int main(){
    // Initializing a string using a character array
    char string[]={'a','b','c','\0'}; // string is a 1-D character array terminated by a null character (‘\0’)
    for (int i = 0; i <3; i++)
    {
    printf(" character is %c\n",string[i]); 
    }
    // Initializing a string using double quotes
    char string1[]="abc";/* here while using double quotes null character is added automatically*/
    //and it is same as above initialization--> char string[]={'a','b','c','\0'};
    for (int i = 0; i <3; i++)
    {
    printf(" character is %c\n",string1[i]); 
    }
    return 0;
}