#include <stdio.h>
#include <string.h>
/* own version of strcpy function from <string.h>*/
void my_strcpy(char copy[],char original[]){
    int j=0;
    while(original[j]!='\0'){
        copy[j]=original[j];
        j++;
    }
    copy[j]='\0';// Null-terminate the copied string
}
int main(){
    char string[]="hello world";//original string 
    char copy[100];//providing size enough to copy
    printf("original string is \"%s\"\n",string);//print original string 
    my_strcpy(copy,string);//copy the original string to copy[100]
    printf("copy of  string is \"%s\"\n ",copy);//print copy of string
    return 0;
}