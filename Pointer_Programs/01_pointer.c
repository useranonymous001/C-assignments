/*
Description: Program to demonstrate pointer to swap the value
Author: Rohan Khatri
Date: 2024/04/04
*/

// program using POINTER 01

#include <stdio.h>

int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 10;
    int y = 20;

    printf("Before swapping: \n x = %d\n y = %d", x, y);

    swap(&x, &y);

    printf("\n\nAfter swapping: \n x = %d\n y = %d", x, y);
    return 0;
}