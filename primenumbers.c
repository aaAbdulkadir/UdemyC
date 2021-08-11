// prime numbers can not be divided by any number between 1 and that number. they are also odd numbers excluding 2.
// this program finds the prime numbers between 1 and 100.
// this works by determing a number that is not divisible by any number between 1 and that number expect, that number.

#include <stdio.h>
 
int main (void) 
{
    // parameters
    int i, j, k;

    // empty array
    int prime_number[50] = {0};

    // hard code the first prime number
    prime_number[0] = 2;

    // second parameter in array
    int prime_index = 1;

    // loops through the odd numbers, whereby a prime number can only be odd excluding 2
    for (i = 3; i < 100; i = i + 2)
    {
        // loop through each number between i to see if it is divisible. have the additional loop of (j = i) to say that if it reaches this point and is divisible, it is a prime number
        for (j = 2; j <= i; j++)
        {
            // if it is not divisible continue because it could be a prime number
            if (i % j != 0)
            {
                continue;
            }
            // it is a prime number
            else if ((i == j) && (i % j == 0))
            {
                prime_number[prime_index] = j;
                prime_index++; 
            }
            // not a prime number
            else
            {
                break;
            }
        }
    }

    // print prime numbers
    printf("The prime numbers from 0 to 100 that are stored in the array are: \n");

    // print prime_index with all prime numbers in array
    for (k = 0; k < prime_index - 2; k++)
    {
        printf("%d, ", prime_number[k]);
    }
    
    // print last 2 prime numbers. prime_number[prime_index] i.e. the last number in the array will give 0 as its /0
    printf("%d and %d.\n", prime_number[prime_index - 2], prime_number[prime_index - 1]);
}