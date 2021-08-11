// declare a structure and print out its contents

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

struct employee
{
    char name[20];
    int hireDate;
    float salary;
};

int main(void)
{
    struct employee member[5] = {{"Kobe", 1997, 193000000}, {"Jordan", 1984, 201000000}, {"Lebron", 2003, 200000000}};

    printf("Name: %s\nYear of Draft: %d\nSalary: %.0f\n\n", member[0].name, member[0].hireDate, member[0].salary);
    printf("Name: %s\nYear of Draft: %d\nSalary: %.0f\n\n", member[1].name, member[1].hireDate, member[1].salary);
    printf("Name: %s\nYear of Draft: %d\nSalary: %.0f\n\n", member[2].name, member[2].hireDate, member[2].salary);

    sleep(1);
    printf("Enter an NBA player and their corresponding details to the database...\n");

    printf("Name: ");
    scanf("%s", member[3].name);

    printf("Year of Draft: ");
    scanf("%d", &member[3].hireDate);

    printf("Salary: ");
    scanf("%f", &member[3].salary);

    printf("\nProcessing data...\n");
    sleep(3);
    printf("Data succesfully stored.\n\n");

    printf("Name: %s\nYear of Draft: %d\nSalary: %.0f\n\n", member[3].name, member[3].hireDate, member[3].salary);
}