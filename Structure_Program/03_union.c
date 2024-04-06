/*
Description: simple program to demostrate the usecase of union
Author: Rohan Khatri
Date: 2024/04/04
*/

// program using Union 03

#include <stdio.h>

union demoUnion
{
    int number;
    int favNumber;
} demo;

int main()
{

    demo.number = 6;
    demo.favNumber = 10;

    printf("Name = %d\nFavNumber = %d", demo.number, demo.favNumber);
    return 0;
}