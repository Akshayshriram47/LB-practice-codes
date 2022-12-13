// Write a pgm which accept number from user and print numbers till that number.

// INPUT  : 8
// OUTPUT : 1   2   3   4   5   6   7   8

// INPUT  : -4
// OUTPUT : 1   2   3   4

// INPUT  : 3
// OUTPUT : 1   2   3

#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=1; iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    }
}


int main()
{
    int iValue=0;
    printf("Enter a number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}