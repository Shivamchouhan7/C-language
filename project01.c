#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between min and max
    int randomnumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    // printf("Random number %d \n", randomnumber);
    printf("guess the number ");
    do{
        printf("guess the number :");
        scanf("%d",&guessed);
        if(guessed>randomnumber){
            printf("lower number please!\n");
        }
        else{
            printf("higher number please!\n");
        }
        no_of_guesses++;
    }while(guessed!=randomnumber);
    printf("you guessed the number ");
    return 0;
}