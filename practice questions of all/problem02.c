#include <stdio.h>

int main(){
    int r;
    int height;
    printf("enter the radius : ");
    scanf("%d",&r);
    printf("enter the height of cyclinder : ");
    scanf("%d",&height);
    printf("\nthe area of circle of radius %d is : %f",r,3.14*r*r);
    printf("\nthe volume of cyclinder of radius %d and height %d is  : %f",r,height,3.14*r*r*height);
    return 0;
}