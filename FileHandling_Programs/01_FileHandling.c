
/*
Description:  storing student details in a file using FILE HANDLING
Author: Rohan Khatri
Date: 2024/04/04
*/

// program using FILE HANDLING & Structure  01

#include <stdio.h>

// declaring structure
struct Student
{
    char name[50];
    int age;
    char grade;
};

int main()
{
    int numStudents, i;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Creating a file pointer
    FILE *filePointer;

    // Opening the file in write mode
    filePointer = fopen("student_records.txt", "w");

    if (filePointer == NULL)
    {
        printf("Error opening file.\n");
        return -1;
    }

    // Writing student records to the file
    struct Student student;
    for (i = 0; i < numStudents; i++)
    {
        printf("Enter student %d's name: ", i + 1);
        scanf("%s", student.name);
        printf("Enter student %d's age: ", i + 1);
        scanf("%d", &student.age);
        printf("Enter student %d's grade: ", i + 1);
        scanf(" %c", &student.grade); // Note the space before %c to consume any whitespace characters

        fprintf(filePointer, "%s %d %c\n", student.name, student.age, student.grade);
    }

    // Closing the file
    fclose(filePointer);
    printf("Student records written to file successfully.\n");

    return 0;
}
