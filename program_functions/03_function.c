/*
Description:  LCM
Author: Rohan Khatri
Date: 2024/04/04
*/

// program using function 03

#include <stdio.h>
int lcmFinder(int num1, int num2);
int hcfFinder(int num1, int num2);
int main()
{
    int num1, num2, lcm, hcf;

    printf("Enter two numbers : ");
    scanf("%d%d", &num1, &num2);

    lcm = lcmFinder(num1, num2);
    hcf = hcfFinder(num1, num2);
    printf("\nThe LCM is of %d and %d is %d", num1, num2, lcm);
    printf("\n\nThe LCM is of %d and %d is %d", num1, num2, hcf);

    return 0;
}

int lcmFinder(int num1, int num2)
{
    int greatest;
    greatest = (num1 > num2) ? num1 : num2;

    for (int i = greatest;; i++)
    {
        if ((i % num1 == 0 && i % num2 == 0))
        {
            return i;
        }
    }
}

int hcfFinder(int num1, int num2)
{
    int smallest = (num1 < num2) ? num1 : num2;

    for (int i = smallest;; i--)
    {

        if (num1 % i == 0 && num2 % i == 0)
        {
            return i;
        }
    }
}