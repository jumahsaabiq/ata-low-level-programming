#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Display the game rules */
void display_rules(void)
{
    printf("Welcome to the Guess the Number game!\n");
    printf("I have chosen a number between 1 and 100. Can you guess it?\n\n");
}

/* Generate a random number between min and max (inclusive) */
int generate_random_number(int min, int max)
{
    return rand() % (max - min + 1) + min;
}

/* Get a valid integer guess from the player */
int get_player_guess(void)
{
    int guess;
    int valid;

    while (1)
    {
        printf("Enter your guess: ");
        valid = scanf("%d", &guess);

        if (valid != 1)
        {
            printf("Invalid input! Please enter an integer.\n");
            /* Clear invalid input */
            while (getchar() != '\n')
                ;
        }
        else
        {
            /* Clear any remaining characters in input buffer */
            while (getchar() != '\n')
                ;
            return guess;
        }
    }
}

/* Check the player's guess against the secret number */
int check_guess(int secret_number, int guess)
{
    if (guess < secret_number)
    {
        printf("Too low! Try again.\n");
        return 0;
    }
    else if (guess > secret_number)
    {
        printf("Too high! Try again.\n");
        return 0;
    }
    else
    {
        printf("Congratulations! You guessed the number!\n");
        return 1;
    }
}

/* Main game loop */
int main(void)
{
    int secret_number, guess;
    int attempts = 0;

    /* Seed random number generator */
    srand(time(NULL));

    display_rules();

    secret_number = generate_random_number(1, 100);

    do
    {
        guess = get_player_guess();
        attempts++;
    } while (!check_guess(secret_number, guess));

    printf("It took you %d attempt%s.\n", attempts, attempts == 1 ? "" : "s");

    return 0;
}
