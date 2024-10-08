#include <stdio.h>
#include <string.h>
/* function slice() to slice a string. It should change the original string such 
that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position 
for slice.*/
char* slice(char str[],int a,int b){
    if(a<0||b>strlen(str)||a>=b){
        printf("invalid indices ...!!!\n");
        puts(str); // Return the original string if invalid
    }
    else{
        int j=0;
        for(int i=a;i<b;i++){
            str[j++]=str[i];
        }
        str[j] = '\0'; // Null-terminate the new string
    }
    return str;
}
int main(){
    char string[]="hello world";
    printf("the original string is \"%s\" \n",string);
    int m,n;
    printf("enter starting position from where you want to slice : ");
    scanf("%d",&m);
    printf("enter ending position for slice : ");
    scanf("%d",&n);
    printf("%s",slice(string,m,n));
    
    return 0;
}