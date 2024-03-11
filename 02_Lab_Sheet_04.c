/*
    Author: Rohan khatri
    Description: C -Assignments B.Sc CSIT 1st Semester
*/

// Questions from 44 - 55 are available here...

#include <stdio.h>
#include <ctype.h>
int main()
{
    // // Q no. 44

    // char character, lowered_character;
    // printf("Enter a character: ");
    // scanf("%c", &character);
    // lowered_character = tolower(character);
    // switch (lowered_character)
    // {
    // case 'a':
    // case 'e':
    // case 'i':
    // case 'o':
    // case 'u':
    //     printf("The character '%c' is vowel", character);
    //     break;

    // default:
    //     if (character >= 'a' || character >= 'A')
    //     {
    //         printf("The letter is consonant.");
    //     }
    //     else
    //
    //         printf("Not a letter");
    //     }
    //     break;
    // }

    // -----------------------------------------------------
    // // Q no. 45

    // int i, j = 1, k = 1;
    // // using for loop
    // for (i = 1; i <= 100; i++)
    // {
    //     printf("%d ", i);
    // }

    // // using while loop
    // while (j <= 100)
    // {
    //     printf("%d ", j);
    //     j++;
    // }

    // // using do while loop
    // do
    // {
    //     printf("%d ", k);
    //     ++k;
    // } while (k <= 100);

    // -----------------------------------------------------
    // Q no.46

    // int i, j = 1, k = 1, num;
    // printf("Enter a number: ");
    // scanf("%d", &num);

    // // using for loop
    // // for (i = 1; i <= num; i++)
    // // {
    // //     if (i % 2 == 0)
    // //     {
    // //         printf("%d ", i);
    // //     }
    // // }

    // // using while loop
    // while (j <= num)
    // {
    //     if (j % 2 == 0)
    //     {
    //         printf("%d ", j);
    //     }
    //     j++;
    // }

    // // // using do while loop
    // do
    // {
    //     if (k % 2 == 0)
    //     {
    //         printf("%d ", k);
    //     }
    //     ++k;
    // } while (k <= num);

    // -----------------------------------------------------

    // // Q no. 47
    // int i, j = 1, k = 1, num;
    // printf("Enter a number: ");
    // scanf("%d", &num);

    // // using for loop
    // for (i = 1; i <= num; i++)
    // {
    //     if (i % 2 != 0)
    //     {
    //         printf("%d ", i);
    //     }
    // }

    // // using while loop
    // while (j <= num)
    // {
    //     if (j % 2 != 0)
    //     {
    //         printf("%d ", j);
    //     }
    //     j++;
    // }

    // // // using do while loop
    // do
    // {
    //     if (k % 2 != 0)
    //     {
    //         printf("%d ", k);
    //     }
    //     ++k;
    // } while (k <= num);

    // -----------------------------------------------------

    // // Q no. 48
    // int first = 0, second = 1, next, i;

    // for (i = 0; i <= 20; i++)
    // {
    //     next = first + second;
    //     first = second;
    //     second = next;
    //     printf("%d ", next);
    // }

    // -----------------------------------------------------

    // // Q no. 49
    // int number, sum = 0, remainder;
    // printf("Enter 3 digit number: ");
    // scanf("%3d", &number);

    // while (number != 0)
    // {
    //     remainder = number % 10;
    //     sum += remainder;
    //     number /= 10;
    // }
    // printf("%d ", sum);

    // -----------------------------------------------------

    // Q no. 50

    // int num, i, count, n, j;
    // printf("Enter Number: ");
    // scanf("%d", &n);
    // printf("\nThe prime factors are: ");
    // for (num = 1; num <= n; num++)
    // {

    //     count = 0;

    //     for (i = 2; i <= num / 2; i++)
    //     {
    //         if (num % i == 0)
    //         {
    //             count++;
    //             break;
    //         }
    //     }

    //     if (count == 0 && num != 1)
    //     {

    //         for (j = 1; j < n; j++)
    //         {
    //             if (n % j == 0 && j == num)
    //             {
    //                 printf(" %d ", num);
    //             }
    //         }
    //     }
    // }

    // -----------------------------------------------------

    // // Q no. 51
    // int num1, num2, max;
    // printf("Enter two nums: ");
    // scanf("%d%d", &num1, &num2);
    // max = (num1 > num2) ? num1 : num2;
    // // printf("%d", max);
    // while (1)
    // {
    //     if ((max % num1 == 0) && (max % num2 == 0))
    //     {
    //         printf("The LCM is %d", max);
    //         break;
    //     }
    //     ++max;
    // }

    // -----------------------------------------------------

    // // Q no. 52

    // int num1, num2, max, i;
    // printf("Enter two nums: ");
    // scanf("%d%d", &num1, &num2);
    // max = (num1 > num2) ? num1 : num2;
    // for (i = max; i <= max; i--)
    // {
    //     if (num1 % i == 0 && num2 % i == 0)
    //     {
    //         printf("The HCF is  %d", i);
    //         break;
    //     }
    //     if (i == 1)
    //     {
    //         break;
    //     }
    // }

    // -----------------------------------------------------

    // // Q no. 53

    // int user, sum = 0, i = 1;
    // printf("Enter a number:");
    // scanf("%d", &user);
    // while (user != 0)
    // {
    //     int sq = i * i;
    //     sum += sq;
    //     i++;
    //     --user;
    // }
    // printf("The sum is %d ", sum);

    // -----------------------------------------------------

    // // Q no. 54

    // float userInput, i, fact, j;
    // float sum = 0;
    // printf("Enter a number:");
    // scanf("%f", &userInput);
    // for (i = 1; i <= userInput; i++)
    // {
    //     for (j = 1; j <= i; j++)
    //     {
    //         fact = 1;
    //         fact *= j;
    //     }
    //     sum += 1 / fact;
    // }
    // printf("The Sum is %.3f ", sum);

    // -----------------------------------------------------

    // Q no. 55

    int number;

    // Example of break statement
    printf("Example of break statement:\n");
    for (number = 0; number < 10; number++)
    {
        if (number == 5)
        {
            printf("Breaking out of loop at i = %d\n", number);
            break;
        }
        printf("number = %d\n", number);
    }

    // Example of continue statement
    printf("\nExample of continue statement:\n");
    for (number = 0; number < 5; number++)
    {
        if (number == 2)
        {
            printf("Skipping iteration at number = %d\n", number);
            continue;
        }
        printf("number = %d\n", number);
    }

    // Example of goto statement
    printf("\nExample of goto statement:\n");
    number = 0;
loop:
    if (number == 3)
    {
        printf("Jumping to end of loop at number = %d\n", number);
        goto end;
    }
    printf("number = %d\n", number);
    number++;
    goto loop;

end:
    printf("End of loop\n");

    // QUESTIONS UPTO 55 ENDS HERE
    // GO TO 01_Lab_Sheet_05.c for other program solutions
    return 0;
}