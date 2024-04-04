
/*
Description: Program to read the file created in Program 02
Author: Rohan Khatri
Date: 2024/04/04
*/

// program using FILE HANDLING  03

/*
NOTE:-
    You need to run program no. 2 and enter some value inside the file and then only this program runs successfully.
*/

#include <stdio.h>

// structure declaration
struct libraryManagement
{
    char bookName[30];
    char authorName[30];
    int price;
    int edition;
};

int main()
{
    FILE *filepointer;
    filepointer = fopen("library.txt", "r");

    // assume the library has atleast 100 books
    struct libraryManagement library[100];

    int i = 0;
    // Read data from file into library array of structure
    while (fscanf(filepointer, "%s %s %d %d", library[i].bookName, library[i].authorName, &library[i].price, &library[i].edition) != EOF && i < 100)
    {
        i++;
    }

    fclose(filepointer);

    // Display the data read from the structure
    printf("Books in the library:\n");
    printf("BookName\tAuthorName\tPrice\tEdition\n");
    for (int j = 0; j < i; j++)
    {
        printf("%s\t\t%s\t\t%d\t\t%d\n", library[j].bookName, library[j].authorName, library[j].price, library[j].edition);
    }

    return 0;
}
