#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    // hard coded data from rainfall from the years 2014 - 2018 for the monthly total rainfall in the UK
    float total_rainfall[5][12] = 
    {
        {186.9, 167.8, 90, 67.5, 99.3, 54.5, 64.3, 137.9, 22.6, 157.6, 123.3, 131.6}, 
        153.7, 80.1, 95.3, 45.5, 110, 56.3, 107.6, 104.8, 52, 72.2, 172.1, 216.9}, 
        {178.7, 110.2, 83.8, 77.3, 61.4, 95.9, 78.7, 85.3, 96.5, 47, 105.1, 77.5}, 
        {76.1, 93.4, 97.8, 33.4, 57.1, 110.4, 101.3, 102.5, 117.3, 101.7, 107.9, 120.7}, 
        {132.6, 68.8, 103.8, 83.9, 47.8, 34.7, 54.3, 83.1, 101.7, 104.5, 121.7, 117.7}
    };

    // months of the year
    char month[12][15] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    // year
    int year[5] = {2014, 2015, 2016, 2017, 2018};

    // initialisation
    float broken;
    float total_monthly = 0;
    float total_yearly = 0;
    float yearly_avg, monthly_avg;
    int i, j, k;

    // print first row of table
    printf("\nYEAR    RAINFALL (mm)\n");

    // loop through the rows to find the yearly average
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 12; j++)
        {
            // iterates and adds up all the monthly total rainfalls
            total_monthly = total_monthly + total_rainfall[i][j];
        }

        // yearly average
        total_yearly = total_monthly;

        printf("%d     %.2f \n", year[i], total_yearly / 12);
        total_monthly = 0;
    } 

    // print yearly average
    printf("\n***The yearly average rainfall is %.2f***\n\n", total_yearly / 5);

    printf("\nMonthly averages: \n\n");

    // calculation of average for each month spanning over the 5 years. Loop through 1 element of each row repeatedly.
    for (i = 0; i < 12; i++)
    { 
        // print months
        for (j = 0; j < 3; j ++)
        {
            printf("%c", month[i][j]);
        }
        printf("       ");

        // print values for months
        for (j = 0; j < 5; j++)
        {
            total_monthly = total_monthly + total_rainfall[j][i];
        }

        // average for each month
        printf("%.2f    \n", total_monthly / 5);

        total_monthly = 0;
    }
    printf("\n");
}