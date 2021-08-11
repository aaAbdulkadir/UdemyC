// guessing game... generate a random number from 0 to 20 and prompt user to guess the computers number. If the guess is too high it will be displayed, it too low it will be displayed, else it is guessed right.
// can only guess 5 times.

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

// declaring function above
int randomNumberGenerator(const int min, const int max, const int count);

int main(void)
{
    // guess of user
    int guess;

    // time
    time_t t; 
    
    // random generator
    srand((unsigned) time(&t));
    // initialises guess to less than 21 i.e. 0 to 20
    int random = rand() % 21;

    // initial message 
    printf("Im thinking of a number between 1 and 20 and you have 5 guesses to guess my number...\n");

    // compare user input to random number generated
    for (int i = 5; i > 0; i--)
    {
        // prompt user to guess a number between 1 and 20
        do
        {
            printf("Guess my number: ");
            scanf(" %i", &guess);
        }
        while (guess < 1 || guess > 20);

        // conditions
        if (guess > random)
        {
            printf("Your guess is too high. ");
        }
        else if (guess < random)
        {
            printf("Your guess is too low. ");
        }
        else
        {
            printf("Congrats, you guessed correctly and it took you %i tries\n", 6-i);
            return 1;
        }

        printf("You have %i guesses left.\n", i-1);
    }

    // if run out of tries, end program
    printf("\nUnfortunately, you have run out of tries... Better luck next time.");
    return 1;
}