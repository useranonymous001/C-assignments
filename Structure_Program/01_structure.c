/*
Description: simple program to demostrate the usecase of structue
Author: Rohan Khatri
Date: 2024/04/04
*/

// program using Structure 01

#include <stdio.h>
#include <string.h>
struct demoStructure
{
    char name[20];
    int age;
} demo;
int main()
{
    strcpy(demo.name, "rohanKhatri");
    demo.age = 21;
    printf("Name = %s\nAge = %d", demo.name, demo.age);
    return 0;
}