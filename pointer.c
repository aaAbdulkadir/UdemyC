#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int value = 10;
    int *p = &value;

    /// --- value ---

    // address of value
    printf("\naddress of value: %p\n", &value);

    // values value
    printf("Value of value: %d\n\n", value);

    /// --- p ---

    // size of pointer in memory
    printf("p's number of bytes: %d\n", (int)sizeof(p));

    // gives the address in hexadecimal
    printf("address of p : %p\n", p);

    // find the value of the address
    printf("value of p: %d\n\n", *p);
}
