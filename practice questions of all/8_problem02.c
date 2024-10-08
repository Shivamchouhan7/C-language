#include <stdio.h>
#include<string.h>
// Write your own version of strlen function from <string.h>
char my_strlen(char str[]){
    int i=0,length;
    char ch=str[i];
    while(ch!='\0'){
        ch=str[i];
        i++;
    }
    length=i-1;
    return length;
}
int main(){
    char str[]="hello world";
    printf("length of string \"%s\" is %d ",str,my_strlen(str));
    return 0;
}