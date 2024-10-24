#include <stdio.h>
//FGETC() AND FPUTC() 
int main(){
    FILE *ptr;
    ptr=fopen("fgetc_fputc.txt","w");
    //char c=fgetc(ptr); used to read a character from file (to use this open file in read mode and comment out fputc)
    //printf("%c",c);
    fputc('c',ptr);//used to write character 'c' to the file 

    return 0;
}