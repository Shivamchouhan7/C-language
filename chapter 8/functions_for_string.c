#include <stdio.h>
#include <string.h>//use this header file to use string functions
//STANDARD LIBRARY FUNCTIONS FOR STRINGS
int main(){
    char string[]="hello";
    //strlen()
    int length=strlen(string);
    printf("output of strlen() :\n");
    printf("length of string is %d\n",length);/*This function is used to
     count the number of characters in the string excluding the null (‘\0’) characters.*/
    char string_2[10];
    //strcpy()
    strcpy(string_2,string);/*This function is used to copy 
    the content of second string into first string passed to it*/
    printf("output of strcpy() :\n");
    puts(string_2);//string_2 has "hello" in it
    //strcat() -->This function is used to concatenate two strings.
    char s1[12] = "hello";
    char s2[] = "world";
    strcat(s1,s2); // s1 now contains "helloworld" <no space in between>
    printf("output of strcat():\n");
    puts(s1);
    //strcmp() -->this function compares the strings character by character based on their ASCII values.
    char a[10]="hello";
    char b[10]="hello";
    char c[10]="world";
    char d[10]="car";
    printf("output of strcmp() :\n");
    int result1=strcmp(a,b);
    printf("%d \n",result1);//If both strings are equal, it returns 0.
    int result2=strcmp(b,c);
    printf("%d \n",result2);/*If the characters differ, 
    it returns the difference between the first unmatched characters*/
    int result3=strcmp(c,d);
    printf("%d \n",result3);
/*0 means equal.
A negative value means the first string is less than the second.
A positive value means the first string is greater than the second.*/
    return 0;
}