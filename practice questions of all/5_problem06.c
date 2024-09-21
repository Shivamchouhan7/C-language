#include <stdio.h>
// pattern program using function 
char pattern(int n){
    return '*';

}

int main(){
    int n;
    printf("enter number rows : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<(2*i+1);j++){
            printf("%c",pattern(n));
        }
        printf("\n");
    }
    return 0;
}