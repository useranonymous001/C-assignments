/*
    Author: Rohan khatri
    Description: C -Assignments B.Sc CSIT 1st Semester
*/

// Questions from 56 - 61 are available here...

#include <stdio.h>
#include <conio.h>
int main()
{
    // // Q no. 56

    // int number[90], cycle, i, sum = 0;
    // printf("Enter cycle of loop: ");
    // scanf("%d", &cycle);

    // for (i = 1; i <= cycle; i++)
    // {
    //     printf("Enter no. %d: ", i);
    //     scanf("%d", &number[i]);
    // }

    // for (i = 1; i <= cycle; i++)
    // {
    //     sum += number[i];
    // }
    // printf("\nThe sum is %d", sum);

    // ----------------------------------------------

    // // Q no. 57

    // int number[20], cycle, i, j, temp;
    // printf("Enter cycle of loop: ");
    // scanf("%d", &cycle);
    // for (i = 0; i < cycle; i++)
    // {
    //     printf("Enter no. %d: ", i + 1);
    //     scanf("%d", &number[i]);
    // }
    // printf("Original Array: ");
    // for (i = 0; i < cycle; i++)
    // {
    //     printf("%d ", number[i]);
    // }
    // for (i = 0; i < cycle; i++)
    // {
    //     for (j = i + 1; j < cycle; j++)
    //     {
    //         if (number[i] > number[j])
    //         {
    //             temp = number[i];
    //             number[i] = number[j];
    //             number[j] = temp;
    //         }
    //     }
    // }
    // printf("\n");
    // printf("Smallest Number in array: %d", number[0]);
    // printf("\nGreatest Number in array: %d", number[cycle - 1]);

    // ---------------------------------------------------

    // // Q no. 58

    // int student[100], num, i, j, temp;
    // printf("Enter no of students: ");
    // scanf("%d", &num);

    // for (i = 0; i < num; i++)
    // {
    //     printf("Enter marks %d: ", i + 1);
    //     scanf("%d", &student[i]);
    // }
    // printf("\nOriginal Marks: \n");
    // for (i = 0; i < num; i++)
    // {
    //     printf("%d ", student[i]);
    // }
    // for (i = 0; i < num; i++)
    // {
    //     for (j = i + 1; j < num; j++)
    //     {
    //         if (student[i] < student[j])
    //         {
    //             temp = student[i];
    //             student[i] = student[j];
    //             student[j] = temp;
    //         }
    //     }
    // }
    // printf("\n");
    // printf("\n");
    // printf("Top 5 marks are listed below: \n");
    // for (i = 0; i < 5; i++)
    // {
    //     printf("%d ", student[i]);
    // }

    //---------------------------------------------------

    // Q no. 59
    // int i, n;
    // printf("Enter no. of elem: ");
    // scanf("%d", &n);

    // int elements[n];
    // int positiveCount = 0;
    // int negativeCount = 0;
    // int zeroCount = 0;
    // for (i = 0; i < n; i++)
    // {
    //     printf("Enter element %d: ", i + 1);
    //     scanf("%d", &elements[i]);
    // }

    // for (i = 0; i < n; i++)
    // {
    //     if (elements[i] > 0)
    //     {
    //         positiveCount++;
    //     }
    //     else if (elements[i] < 0)
    //     {
    //         negativeCount++;
    //     }
    //     else
    //     {
    //         zeroCount++;
    //     }
    // }

    // printf("\nPositive Count = %d: ", positiveCount);
    // printf("\nNegative Count = %d: ", negativeCount);
    // printf("\nZero Count = %d: ", zeroCount);

    //--------------------------------------------------

    // // Q no. 60

    // int i, n;
    // printf("NO. of Employee: ");
    // scanf("%d", &n);

    // int employeeSalary[n];
    // for (i = 0; i < n; i++)
    // {
    //     printf("Salary of %d emp: ", i + 1);
    //     scanf("%d", &employeeSalary[i]);
    // }
    // for (i = 0; i < n; i++)
    // {
    //     if (employeeSalary[i] >= 5000 && employeeSalary[i] < 10000)
    //     {
    //         printf("%d ", employeeSalary[i]);
    //     }
    // }

    //----------------------------------------------------

    // Q no. 61

    // int n, i;
    // printf("Enter no. of numbers: ");
    // scanf("%d", &n);

    // int numbers[n];
    // int evenSum = 0;
    // int oddSum = 0;

    // for (i = 0; i < n; i++)
    // {
    //     printf("Enter num %d: ", i + 1);
    //     scanf("%d", &numbers[i]);
    // }
    // for (i = 0; i < n; i++)
    // {
    //     if (numbers[i] % 2 == 0)
    //     {
    //         evenSum += numbers[i];
    //     }
    //     else
    //     {
    //         oddSum += numbers[i];
    //     }
    // }

    // printf("\nSum of EVEN nums: %d", evenSum);
    // printf("\nSum of ODD nums: %d", oddSum);
    return 0;
}