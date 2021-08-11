// pass by referene using pointers --> write a function that squares the number

#include <stdlib.h>
#include <stdio.h>

void square(int * const x);

int main(void)
{
    int num = 9;

    square(&num);
    printf("The square of the given number is %d \n", num);
}

void square(int * const x) // const in its poisition to not change the address but change the value of x
{
    *x = (*x) * (*x);
}

// const before star means value of int cannot change and const after star means address cannot change