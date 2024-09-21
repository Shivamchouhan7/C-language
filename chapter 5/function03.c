#include <stdio.h>
#include <math.h>
//use library function to calculate area of square of side a

int main(){
    int a;
    printf("enter side of square : \n");
    scanf("%d",&a);
    printf("the area of square is : %f ",pow(a,2));//power function takes "double" value that's why we used %f
    return 0;
}