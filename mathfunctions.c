// write 3 functions:
// 1) find the greatest common divisor of two non-negative integer values and return the result
// 2) function to calculate the absolute value of a number
// 3) write a function to compute the square root of a number

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>

/* ------------------ CALL FUNCTIONS ------------------ */
void greatestCommonDivisor(void);
void absoluteValue(void);
void squareRoot(void);

/* ------------------ MAIN ------------------ */
int main(void)
{
    greatestCommonDivisor();
    absoluteValue();
    squareRoot();
}


/* ------------------ FUNCTIONS ------------------ */

// Greatest common divisor function
void greatestCommonDivisor(void)
{
    int x, y, gcd;

    // user input
    printf("\nFunction 1: Calculates the greatest common divisor.\n");
    sleep(1);

    // has to be positive as specified
    do
    {
        printf("Input the first number: ");
        scanf("%d", &x);
    } 
    while (x < 0);

    do
    {
        printf("Input the second number: ");
        scanf("%d", &y);
    } 
    while (y < 0);

    printf("Calculating the greatest common divisor of %d and %d...\n", x, y);
    sleep(2);

    // finding the divisors of number 1
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            if ((x % i == 0) && (y % j == 0))
            {
                if (i == j)
                {
                   gcd = i;  
                }
                else
                {
                    continue;
                }
            }
            else
            {
                continue;
            }   
        }
    }
    printf("The greatest common divisor is %d!\n\n", gcd);
    sleep(3);
}


// Absolute value function
void absoluteValue(void)
{
    float x;

    // user input
    printf("\nFunction 2: Calculates the absolute value.\n");
    sleep(1);
    printf("Input a number: ");
    scanf("%f", &x);
    printf("Calculating the absolute value of %.1f...\n", x);
    sleep(2);  

    // finding absolute value
    if (x < 0)
    {
        x = -x;
    }
    else
    {
        x = x;
    }

    printf("The absolute value is %.1f!\n\n", x);
    sleep(3);
    
}


// Square root function
void squareRoot(void)
{
    float x;

    // user input
    printf("\nFunction 1: Calculates the square root.\n");
    sleep(1);

    // has to be positive as specified
    do
    {
        printf("Enter a positive number: ");
        scanf("%f", &x);
    } 
    while (x < 0);

    printf("Calculating the square root of %.2f...\n", x);
    sleep(2);

    // finding square root
    x = pow(x, 0.5);

    printf("The square root is %.2f!\n\n", x);
    sleep(3);
}