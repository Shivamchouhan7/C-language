#include <stdio.h>
/* to finding  force of attraction (weight) on a body of mass 
𝑚 exerted by the Earth  concidering g=9.8 using function */
float force(float m){
    return m*9.8;
}
int main(){
    float mass ;
    printf("enter mass of the body : ");
    scanf("%f",&mass);
    printf("force on the body of mass %.2f is %.2f  ", mass,force(mass));

    
    return 0;
}