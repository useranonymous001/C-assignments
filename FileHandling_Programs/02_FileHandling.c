
/*
Description:  Program to strore N no. of books details inside the library
              also create a key to open the file
Author: Rohan Khatri
Date: 2024/04/04
*/

// program using FILE HANDLING & Structure 02

#include <stdio.h>
struct libraryManagement
{

    char bookName[30];
    char authorName[30];
    int price;
    int edition;
};

int main()
{
    int n, i;
    printf("How many books to store? ");
    scanf("%d", &n);

    FILE *filepointer;
    filepointer = fopen("library.txt", "w");
    struct libraryManagement library[n];

    // doing some formatting inside the file

    fprintf(filepointer, "BookName\tAuthorName\tPrice\tEdition\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter BookName: ");
        scanf("%s", library[i].bookName);

        printf("Enter Author Name: ");
        scanf("%s", library[i].authorName);

        printf("Enter Price: ");
        scanf("%d", &library[i].price);

        printf("Enter last edition: ");
        scanf("%d", &library[i].edition);

        fprintf(filepointer, "%s\t\t%s\t\t%d\t\t%d\n", library[i].bookName, library[i].authorName, library[i].price, library[i].edition);
    }

    fclose(filepointer);
    printf("Written Succedssfully");
    return 0;
}
