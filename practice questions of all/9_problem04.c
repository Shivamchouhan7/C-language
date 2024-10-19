#include <stdio.h>
/*Create an array of 5 complex numbers  and display them
with the help of a display function. The values must be taken as an input from 
the user*/
struct complexNum
{
    float real;
    float img;
};
//display function
void display(struct complexNum c[5])// Array to hold 5 complex numbers
{
    for(int i=0;i<5;i++){
        printf("Complex Number %d = %.2f + %.2fi \n",i+1,c[i].real,c[i].img);
    }
}
int main(){
    struct complexNum c[5];
    for(int i=0;i<5;i++){
    printf("Enter real part of complex number %d: ",i+1);
    scanf("%f",&c[i].real);
    printf("Enter Imaginary part of complex number %d: ",i+1);
    scanf("%f",&c[i].img);
    }
    display(c);//caliing display function
    
    return 0;
}