#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // random number guessing  game 
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 to 100
    int randomnumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;
    printf("guess the number ");
    do{
        printf("guess the number :");
        scanf("%d",&guessed);
        if(guessed>randomnumber){
            printf("lower number please!\n");
        }
        else if(guessed<randomnumber){
            printf("higher number please!\n");
        }
        else{
            printf("congratulations you guessed!!\n");
        }
        no_of_guesses++;
    }while(guessed!=randomnumber);
    printf("you guessed the number in %d guesses ",no_of_guesses);
    return 0;
}