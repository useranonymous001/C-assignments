/*
Description: Program to demonstrate pointer find sum of elements inside array
Author: Rohan Khatri
Date: 2024/04/04
*/

#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Pointer pointing to the first element of the array
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;

    // Iterating through the array using pointer arithmetic
    for (int i = 0; i < size; i++)
    {
        sum += *ptr; // Adding the value pointed by ptr to sum
        ptr++;       // Moving the pointer to the next element
    }

    printf("Sum of elements in the array: %d\n", sum);

    return 0;
}
