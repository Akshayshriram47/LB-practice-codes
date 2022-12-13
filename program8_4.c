// Write a program which accept number from user and display its Table

// INPUT  : 2
// OUTPUT : 2   6   8   10  12  14  16  18  20

// INPUT  : -5
// OUTPUT : 5   10  15  20  25  30  35  40  45  50

// INPUT  : 5
// OUTPUT : 5   10  15  20  25  30  35  40  45  50


#include<stdio.h>

void Table(int iNo)
{
    int iCnt=0,iSum=0;

    if(iNo<0)   // updator
    {
        iNo=-iNo;
    }

    for(iCnt=1;iCnt<=10;iCnt++)
    {
        printf("%d\t",iNo*iCnt);

    }
}

int main()
{
    int iValue=0;
    printf("Enter a number\n");
    scanf("%d",&iValue);

    Table(iValue);
     return 0;
}