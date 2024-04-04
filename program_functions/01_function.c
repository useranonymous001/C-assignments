/*
Description: program to check whether the given year is leap or not
Author: Rohan Khatri
Date: 2024/04/04
*/

// program using function 01

#include <stdio.h>

int checkLeapYear(int year);

int main()

{
    int year;
    printf("Enter the year to check: ");
    scanf("%d", &year);

    if (checkLeapYear(year))
    {
        printf("%d is a Leap Year", year);
    }
    else
    {
        printf("%d is not a Leap Year", year);
    }

    return 0;
}

int checkLeapYear(int year)

{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
