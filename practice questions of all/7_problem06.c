#include <stdio.h>
// an array  containing multiplication tables of the any number
int main(){
    int v, table[1][10];
    printf("enter the number for which you want to store table : ");
    scanf("%d",&v);
    for(int j=0;j<10;j++){
        table[0][j]=v*(j+1);
    }
    printf("the multiplication table of %d is  \n",v);
    for(int j=0;j<10;j++){
        printf("%d*%d=%d\n",v,j+1,table[0][j]);
    }
    
    
    return 0;
}