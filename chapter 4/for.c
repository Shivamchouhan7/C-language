#include <stdio.h>

int main(){
    // for printing 1st n natural number
    int n; 
    printf("enter n'th value : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf(" value of i is %d \n ",i);//the value of i is  printed n times as user input
    }
    
    return 0;
}