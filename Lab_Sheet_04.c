/*
    Author: Rohan khatri
    Description: C -Assignments B.Sc CSIT 1st Semester
*/

// Questions from 37 - 43 are available here...

#include <stdio.h>
#include <conio.h>
int main()
{
    // // Q no. 37
    // int input;
    // printf("Enter a num: ");
    // scanf("%d", &input);
    // if (input % 5 == 0)
    // {
    //     printf("It is divisible !");
    // }
    // else
    // {
    //     printf("Not Divisible");
    // }

    // // Q no. 38
    // int input;
    // printf("Enter a num: ");
    // scanf("%d", &input);
    // if (input % 2 == 0)
    // {
    //     printf("Number is even");
    // }
    // else
    // {
    //     printf("Number is odd");
    // }

    // // Q no. 39
    // int input1, input2, input3, greatest;
    // printf("Enter a 3 nums: ");
    // scanf("%d%d%d", &input1, &input2, &input3);

    // greatest = (input1 > input2 && input1 > input3) ? input1 : ((input2 > input3) ? input2 : input3);
    // printf("The greatest number among %d,%d,%d is %d ", input1, input2, input3, greatest);

    // // Q no. 40
    // int age;
    // printf("Enter your age: ");
    // scanf("%d", &age);
    // if (age > 12 && age < 20)
    // {
    //     if (age == 16)
    //     {
    //         printf("You are a teenager as well as  in middle age of teenage");
    //     }
    //     else
    //     {
    //         printf("You are a teenager.");
    //     }
    // }

    // // Q no. 41
    // int num, original_num, reversedNum = 0, remainder;
    // printf("Enter the number: ");
    // scanf("%d", &num);
    // original_num = num;
    // while (num != 0)
    // {
    //     // this loop reverse the number
    //     remainder = num % 10;
    //     reversedNum = reversedNum * 10 + remainder;
    //     num = num / 10;
    // }
    // if (reversedNum == original_num)
    // {
    //     printf("%d is palindrome", original_num);
    // }
    // else
    // {
    //     printf("%d is not palindrome", original_num);
    // }

    // Q no. 42
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        if (number > 0)
        {
            printf("The number is EVEN POSITIVE.");
        }
        else
        {
            printf("The number is EVEN NEGATIVE");
        }
    }
    else
    {
        if (number < 0)
        {
            printf("The number is ODD NEGATIVE");
        }
        else
        {
            printf("The number is ODD POSITIVE");
        }
    }

    return 0;
}