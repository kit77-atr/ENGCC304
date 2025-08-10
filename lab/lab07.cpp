#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));  

    int command;
    do {
        printf("Do you want to play game (1=play,-1=exit) :\n");
        if (scanf("%d", &command) != 1) {
            printf("Please enter only 1 or -1.\n");
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            continue;
        }

        if (command != 1 && command != -1) {
            printf("Please enter only 1 or -1.\n");
            continue;
        }

        if (command == 1) {
            int score = 100;
            int winningNumber = rand() % 100 + 1; 
            int low = 1, high = 100;
            int guess;

            printf("(Score=%d)\n", score);

            do {
                printf("Guess the winning number (%d-%d) :\n", low, high);
                if (scanf("%d", &guess) != 1) {
                    printf("Please enter a valid number.\n");
                    int c;
                    while ((c = getchar()) != '\n' && c != EOF);
                    continue;
                }

                if (guess < low || guess > high) {
                    printf("Please guess a number within the range %d to %d.\n", low, high);
                    continue;
                }

                if (guess == winningNumber) {
                    printf("That is correct! The winning number is %d.\n", winningNumber);
                    printf("Score this game: %d\n", score);
                    break;
                } else {
                    score -= 10;
                    if (score < 0) score = 0;

                    if (guess < winningNumber) {
                        printf("Sorry, the winning number is HIGHER than %d. (Score=%d)\n", guess, score);
                        if (guess + 1 > low) low = guess + 1;
                    } else {
                        printf("Sorry, the winning number is LOWER than %d. (Score=%d)\n", guess, score);
                        if (guess - 1 < high) high = guess - 1;
                    }
                }
            } while (guess != winningNumber);
        }

    } while (command != -1);

    printf("See you again.\n");

    return 0;
}
