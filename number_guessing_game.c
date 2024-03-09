#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
TODO:
    Implement a number guessing game program

    1. Declare variables for random number, user guess, and attempts
    2. Generate a random number between a specified range (e.g., 1 to 100)
    3. Display game instructions and get the user's initial guess
    4. Use a loop to continue the game until the user guesses the correct number
    5. Display a congratulatory message and the number of attempts when the user guesses correctly

EXTRAS:
    6. Test the program with various inputs and guesses
    7. Consider adding difficulty levels or scoring system
    8. Ensure the program handles edge cases and invalid inputs
    9. Optimize the program for efficiency if necessary
*/

int generateRandomNumber(int min, int max)
{
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Calculate the random number within the specified range
    int randomNumber = rand() % (max - min + 1) + min;

    return randomNumber;
}

int main()
{
    int randomNum = generateRandomNumber(1, 100);
    printf("Random Number: %d\n", randomNum);

    int guess;
    printf("enter your guess\n");
    scanf("%d", &guess);

    do
    {
        if (guess < randomNum)
        {
            printf("guessed number is less than random number\nEnter new guess\n");
            scanf("%d", &guess);
        }
        else
        {
            printf("guessed number is greater than random number\nEnter new guess\n");
            scanf("%d", &guess);
        }
    } while (guess != randomNum);
    printf("Congrats!\nYour guess is right!");
    return 0;
}
