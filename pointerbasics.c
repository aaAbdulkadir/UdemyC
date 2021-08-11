// pointer basics --> write a program that prints the address and value of a pointer
//                    as well as the waht the pointer is pointing to


#include <stdio.h>

int main(void)
{
    int age = 30;           // random int variable
    int *p = NULL;          // initalise pointer to null so that it doesn't point to anything
    p = &age;               // address of age is assigned to p

    printf("Address of age: %p \n", &age);
    printf("Address of p: %p \n", &p);
    printf("Value of p: %p \n", p);
    printf("Value of what p is pointing to: %d \n", *p);
}