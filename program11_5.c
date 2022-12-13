// Write a program which accept range from user and display all numbers in between that range in reverse order

// INPUT  : 25  35
// OUTPUT : 35  34  33  32  31  30  29  28  27  26  25

// INPUT  : 10  18
// OUTPUT : 18  17  16  15  14  13  12  11  10

// INPUT  : -10  2
// OUTPUT : 2   1   0   -1  -2  -3  -4  -5  -6  -7  -8  -9  -10

// INPUT  : 90  35
// OUTPUT : Invalid Range

#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt=0;
    if(iStart>iEnd)
    {
        printf("Invalid range");
    }

    for(iCnt=iEnd; iCnt>=iStart; iCnt--)
    {
        printf("%d\t",iCnt);
        
    }
}

int main()
{
    int iValue1=0, iValue2=0;

    printf("Enter starting point\n");
    scanf("%d",&iValue1);

    printf("Enter ending point\n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);
    return 0;
}