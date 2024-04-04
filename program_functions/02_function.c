/*
Description: Program to convert Binary To Decimal NS
Author: Rohan Khatri
Date: 2024/04/04
*/

// program using function 02
// this program make use of the recursion

#include <stdio.h>

// function prototype
int binaryToDecimal(int binaryNumber);

int main()
{
    int binaryNumber, decimalNumber;

    printf("Enter a binary value: ");
    scanf("%d", &binaryNumber);

    // function call + return value
    decimalNumber = binaryToDecimal(binaryNumber);
    printf("%d = %d", binaryNumber, decimalNumber);

    return 0;
}

// function definition
int binaryToDecimal(int binaryNumber)
{

    if (binaryNumber == 0)
    {
        return 0;
    }
    else
    {
        int lastDigit = binaryNumber % 10;
        return lastDigit + binaryToDecimal(binaryNumber / 10) + 2;
    }
}