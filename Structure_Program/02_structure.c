/*
Description: Program to create array of structure and insert details into it.
Author: Rohan Khatri
Date: 2024/04/04
*/

// program using Structure 02

#include <stdio.h>

struct Google
{
    char empName[20];
    int salary;
};
int main()
{
    int i;
    struct Google employee[4];

    for (i = 0; i < 4; i++)
    {

        printf("Enter Emp name and salary (%d) : ", i + 1);
        scanf("%s%d", employee[i].empName, &employee[i].salary);
    }

    printf("\nEmp Name\t Salary\n");
    for (i = 0; i < 4; i++)
    {
        printf("\n%s\t\t %d", employee[i].empName, employee[i].salary);
    }

    return 0;
}