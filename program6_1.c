//  Write a program which accept name from user and print that name

// INPUT  : Akshay Shriram
// OUTPUT : Akshay Shriram


#include<stdio.h>
#include<string.h>

int main()
{
    char cName[30];

    printf("Please enter your full name: \n");
    scanf("%s",&cName);

    printf("Your Good name is: %s",cName);

    return 0;
}