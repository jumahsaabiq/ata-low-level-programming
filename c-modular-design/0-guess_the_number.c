#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Function prototypes */
void display_rules(void);
int generate_random_number(int min, int max);
int get_player_guess(void);
int check_guess(int secret_number, int guess);

/* Function definitions */

/* Prints the rules of the game */
void display_rules(void)
{
    printf("Welcome to the Guess the Number game!\n");
    printf("I have chosen a number between 1 and 100. Can you guess it?\n\n");
}

/* Generates a random number between min and max inclusive */
int generate_random_number(int min, int max)
{
    return rand() % (max - min + 1) + min;
}

/* Prompts the user to enter a guess, validates input */
int get_player_guess(void)
{
    int guess;
    int result;

    while (1)
    {
        printf("Enter your guess: ");
        result = scanf("%d", &guess);

        if (result == 1)
        {
            return guess;
        }
        else
        {
            printf("Invalid input! Please enter an integer.\n");
            /* Clear the invalid input */
            int c;
            while ((c = getchar()) != '\n' && c != EOF)
                ;
        }
    }
}

/* Checks the guess against the secret number and prints feedback */
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

/* Main function: entry point */
int main(void)
{
    int secret_number, guess;
    int attempts = 0;

    /* Seed random number generator */
    srand(time(NULL));

    /* Display game rules */
    display_rules();

    /* Generate the secret number */
    secret_number = generate_random_number(1, 100);

    /* Game loop */
    do
    {
        guess = get_player_guess();
        attempts++;
    } while (!check_guess(secret_number, guess));

    printf("It took you %d attempt%s.\n", attempts, attempts == 1 ? "" : "s");

    return 0;
}
