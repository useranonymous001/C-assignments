/*
    Author: Rohan khatri
    Description: C -Assignments B.Sc CSIT 1st Semester
*/

// Questions from 62 - 67 are available here...

#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    int n;
    printf("how many no? ");
    scanf("%d", &n);
    int i, j;
    int numbers[n];
    for (i = 0; i < n; i++)
    {
        printf("enter num %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    printf("\nOriginal Numbers: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\nNumbers in ascending order: ");
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (numbers[i] > numbers[j])
            {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n\nNumbers in Descending order: \n");
    for (i = 1; i <= n; i++)
    {
        printf("%d ", numbers[n - i]);
    }

    // Q no. 63
    // int i, j, n, rows, cols;

    // printf("Enter rows: ");
    // scanf("%d", &rows);
    // printf("Enter cols: ");
    // scanf("%d", &cols);

    // int matrix[rows][cols];
    // for (i = 1; i <= rows; i++)
    // {
    //     for (j = 1; j <= cols; j++)
    //     {
    //         printf("Enter %d%d: ", i, j);
    //         scanf("%d", &matrix[i][j]);
    //     }
    // }
    // // logic to find the transpose of the matrix

    // for (i = 1; i <= cols; i++)
    // {
    //     for (j = 1; j <= rows; j++)
    //     {
    //         printf("%d\t", matrix[j][i]);
    //     }
    //     printf("\n");
    // }

    // --------------------------------------------------------------------------------------

    // // Q no. 64

    // int row, col;

    // printf("Enter rows and columns : ");
    // scanf("%d %d", &row, &col);

    // int matrix[row][col];

    // printf("Enter elements of the matrix:\n");
    // for (int i = 0; i < row; ++i)
    // {
    //     for (int j = 0; j < col; ++j)
    //     {
    //         printf("Enter element matrix[%d][%d]: ", i, j);
    //         scanf("%d", &matrix[i][j]);
    //     }
    // }

    // printf("\nThe matrix is:\n");
    // for (int i = 0; i < row; ++i)
    // {
    //     for (int j = 0; j < col; ++j)
    //     {
    //         printf("%d\t", matrix[i][j]);
    //     }
    //     printf("\n");
    // }

    // printf("\nSum of individual rows:\n");
    // for (int i = 0; i < row; ++i)
    // {
    //     int row_sum = 0;
    //     for (int j = 0; j < col; ++j)
    //     {
    //         row_sum += matrix[i][j];
    //     }
    //     printf("Row %d: %d\n", i + 1, row_sum);
    // }

    // printf("\nSum of individual columns:\n");
    // for (int j = 0; j < col; ++j)
    // {
    //     int col_sum = 0;
    //     for (int i = 0; i < row; ++i)
    //     {
    //         col_sum += matrix[i][j];
    //     }
    //     printf("Column %d: %d\n", j + 1, col_sum);
    // }

    // --------------------------------------------------------------------------------------

    // // Q no. 65

    // char input[1000];
    // int vowels = 0, consonants = 0, semicolons = 0, commas = 0;
    // char ch;
    // int i = 0;

    // printf("Enter a string: ");

    // // Read characters until Enter key is pressed
    // while ((ch = getchar()) != '\n')
    // {
    //     input[i++] = ch;
    // }
    // input[i] = '\0'; // Null-terminate the string

    // // Count vowels, consonants, semicolons, and commas
    // for (int j = 0; input[j] != '\0'; ++j)
    // {
    //     char current_char = tolower(input[j]);

    //     if (current_char == 'a' || current_char == 'e' || current_char == 'i' || current_char == 'o' || current_char == 'u')
    //         ++vowels;
    //     else if (current_char >= 'a' && current_char <= 'z')
    //         ++consonants;
    //     else if (current_char == ';')
    //         ++semicolons;
    //     else if (current_char == ',')
    //         ++commas;
    // }

    // printf("\nNumber of vowels: %d\n", vowels);
    // printf("Number of consonants: %d\n", consonants);
    // printf("Number of semicolons: %d\n", semicolons);
    // printf("Number of commas: %d\n", commas);

    // --------------------------------------------------------------------------------------

    // // Q no. 66

    // char str1[20], str2[20], result[40];
    // printf("Enter two strings: ");
    // scanf("%s%s", str1, str2);

    // strcat(str1, str2);

    // printf("\nconcatenated string = %s", str1);

    // -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --

    // Q no. 67
    // char str1[20], str2[20], result[40];
    // printf("Enter any strings: ");
    // scanf("%s", str1);

    // strcpy(str2, str1);

    // printf("\nstr1 = %s\ncopied str = %s", str1, str2);

    // --------------------------------------------------------------------------------------

    // Q no. 68

    // char str1[20], str2[20], result[40];

    // printf("Enter two strings: ");
    // scanf("%s%s", str1, str2);

    // if (strcmp(str1, str2) == 0)
    // {
    //     printf("Two strings are equal.");
    // }
    // else if (strcmp(str1, str2) < 0)
    // {
    //     printf("First str < second str");
    // }
    // else if (strcmp(str1, str2) > 0)
    // {
    //     printf("First str > second str");
    // }
    return 0;
}