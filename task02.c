#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numberToGuess, userGuess;
    int attempts = 0;

    
    srand(time(NULL));

    // Generate a random number between 1 and 100
    numberToGuess = rand() % 100 + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I've chosen a number between 1 and 100. Try to guess it.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &userGuess);
        attempts++;

        
        if (userGuess == numberToGuess) {
            printf("Congratulations! You guessed the correct number (%d) in %d attempts.\n", numberToGuess, attempts);
            break;
        } else if (userGuess < numberToGuess) {
            printf("Too low. Try again.\n");
        } else {
            printf("Too high. Try again.\n");
        }
    } while (1); 

    return 0;
}

