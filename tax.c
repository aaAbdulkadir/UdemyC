// This progeam calculates the pay after taxes for someone who earns 12 dollars an hour or 12 * 1.5 dollars an hour for overtime.

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    float pay_rate = 12.00;
    float overtime = 0;
    int hours;
    float wage, wage_without_overtime, wage_from_overtime, twenty_five_percent_bracket, twenty_percent_bracket, fifteen_percent_bracket, wage_after_tax;

    // user input
    do
    {
        printf("How many hours do you work (>0): ");
        scanf("%i", &hours);
    } 
    while (hours <= 0);

    // over time is excess of 40 hours therefore paid 1.5x your amount
    if (hours > 40)
    {
        // regular pay
        wage_without_overtime = pay_rate * 40;

        // overtime
        wage_from_overtime = 1.5 * (pay_rate * (hours - 40));

        // total pay before tax
        wage = wage_from_overtime + wage_without_overtime;

        // tax for over 450 dollars in overtime. For overtime, you will make a minimum of greater than 480 dollars so anything less is not needed.
        if (wage > 450)
        {
            // 25 percent tax bracket
            twenty_five_percent_bracket = (wage - 450) * 0.75;

            // 20 percent tax brackt
            twenty_percent_bracket = 150 * 0.80;

            // 15 percent tax bracket
            fifteen_percent_bracket = 300 * 0.85;

            // wage
            wage_after_tax = twenty_five_percent_bracket + twenty_percent_bracket + fifteen_percent_bracket;

            printf("Pay after tax: %.2f\n", wage_after_tax);
        }
    }
    else if (hours <= 40 && hours > 0)
    {
        // wage
        wage = pay_rate * hours;

        // tax for over 450 dollars in overtime
        if (wage > 450)
        {
            // 25 percent tax bracket
            twenty_five_percent_bracket = (wage - 450) * 0.75;

            // 20 percent tax brackt
            twenty_percent_bracket = 150 * 0.80;

            // 15 percent tax bracket
            fifteen_percent_bracket = 300 * 0.85;

            // wage
            wage_after_tax = twenty_five_percent_bracket + twenty_percent_bracket + fifteen_percent_bracket;

            printf("Pay after tax: %.2f\n", wage_after_tax);
        }
        else if (wage > 300 && wage <= 450)
        {
            // 20 percent tax brackt
            twenty_percent_bracket = (wage - 300) * 0.80;

            // 15 percent tax bracket
            fifteen_percent_bracket = 300 * 0.85;

            // wage
            wage_after_tax = twenty_percent_bracket + fifteen_percent_bracket;

            printf("Pay after tax: %.2f\n", wage_after_tax);
        }
        else 
        {
            // 15 percent tax bracket
            fifteen_percent_bracket = wage * 0.85;

            // wage
            wage_after_tax = fifteen_percent_bracket;

            printf("Pay after tax: %.2f\n", wage_after_tax);
        }
    }
    else
    {
        return 0;
    }
}