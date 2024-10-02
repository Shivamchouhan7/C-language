#include <stdio.h>
/*TAKING STRING INPUT FROM THE USER*/
int main(){
    char st[4];// size is 4 to accommodate 3 characters and the null terminator
    printf("Enter a string (max 3 characters): ");
    scanf("%s",st);//scanf automatically adds a null character when the enter key is pressed.
    /*Note:
1. The string should be short enough to fit into the array.
2. scanf cannot be used to input multi-word strings with spaces.*/
    printf("%s",st);
    return 0;
}