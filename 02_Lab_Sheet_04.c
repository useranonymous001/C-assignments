/*
    Author: Rohan khatri
    Description: C -Assignments B.Sc CSIT 1st Semester
*/

// Questions from 44 - 55 are available here...

// Q no. 44

#include <stdio.h>
#include <ctype.h>
int main()
{
    char character, lowered_character;
    printf("Enter a character: ");
    scanf("%c", &character);
    lowered_character = tolower(character);
    switch (lowered_character)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("The character '%c' is vowel", character);
        break;

    default:
        if (character >= 'a' || character >= 'A')
        {
            printf("The letter is consonant.");
        }
        else
        {
            printf("Not a letter");
        }
        break;
    }

    return 0;
}
