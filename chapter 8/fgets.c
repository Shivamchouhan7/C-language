#include <stdio.h>
// FGETS()
int main(){
    char str[6];
    printf("enter string (max size 5) \n");
    fgets(str,sizeof(str),stdin);//reads a line of text from standard input (stdin) and stores it in the str 
    puts(str);
    return 0;
}