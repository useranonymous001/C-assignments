/*
    Author: Rohan khatri
    Description: C -Assignments B.Sc CSIT 1st Semester
*/

// Questions from 56 - 60 are available here...

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

    // Q no. 58

    int student[100], num, i, j, temp;
    printf("Enter no of students: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        printf("Enter marks %d: ", i + 1);
        scanf("%d", &student[i]);
    }
    printf("\nOriginal Marks: \n");
    for (i = 0; i < num; i++)
    {
        printf("%d ", student[i]);
    }
    for (i = 0; i < num; i++)
    {
        for (j = i + 1; j < num; j++)
        {
            if (student[i] < student[j])
            {
                temp = student[i];
                student[i] = student[j];
                student[j] = temp;
            }
        }
    }
    printf("\n");
    printf("\n");
    printf("Top 5 marks are listed below: \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", student[i]);
    }
    return 0;
}