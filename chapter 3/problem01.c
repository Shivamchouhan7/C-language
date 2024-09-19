#include <stdio.h>

int main(){
    int m1,m2,m3,s,p;
    scanf("%d",&m1);
    scanf("%d",&m2);
    scanf("%d",&m3);
    s=(m1+m2+m3)/3;
    if(m1<33 || m2<33 || m3<33 ){
        printf("\n you failed due to less marks in particular subject :");
    }      
    else if (s<40){
        printf(" you have failed due to total percentage ");
    }
    else{
        printf("you passed");
    }
     return 0;
}