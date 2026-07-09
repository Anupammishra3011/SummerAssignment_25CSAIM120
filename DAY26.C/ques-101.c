#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;

    // Generate a random number between 1 and 100
    srand(time(0));
    secretNumber = rand() % 100 + 1;

    printf("=== Number Guessing Game ===\n");
    printf("Guess the number between 1 and 100.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secretNumber) {
            printf("Too High! Try again.\n");
        } else if (guess < secretNumber) {
            printf("Too Low! Try again.\n");
        } else {
            printf("\nCongratulations! You guessed the correct number.\n");
            printf("You guessed it in %d attempts.\n", attempts);
        }

    } while (guess != secretNumber);

    return 0;
}