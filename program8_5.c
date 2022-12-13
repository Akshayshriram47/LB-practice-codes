// Write a program which accept number from user and display its table in reverse order

// INPUT  : 2
// OUTPUT : 20  18  16  14  12  10  8   6   4   2   

// INPUT  : -5
// OUTPUT : 50  45  40  35  30  25  20  15  10  5

// INPUT  :5
// OUTPUT : 50  45  40  35  30  25  20  15  10  5

#include<stdio.h>

void RevTable(int iNo)
{
    int iCnt=0,iSum=0;

    if(iNo<0)   // updator
    {
        iNo=-iNo;
    }

    for(iCnt=10;iCnt>1;iCnt--)
    {
        printf("%d\t",iNo*iCnt);

    }
}

int main()
{
    int iValue=0;
    printf("Enter a number\n");
    scanf("%d",&iValue);

    RevTable(iValue);
     return 0;
}