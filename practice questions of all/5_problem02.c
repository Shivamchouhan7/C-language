#include <stdio.h>
// program for Converting Celsius to Fahrenheit by using function
float temperature(float a, float b){
    // Convert Celsius to Fahrenheit
    return b = (a * 9.0 / 5.0) + 32;
}

int main() {
    float celsius, fahrenheit;
    // Prompt the user for input
    printf("Enter temperature in Celsius: \n");
    scanf("%f", &celsius);

    // Print the result
    printf("Temperature in Fahrenheit for %.2f is : %.2f\n", celsius,temperature(celsius, fahrenheit));

    return 0;
}
