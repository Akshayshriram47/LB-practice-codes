// Write a program which accept range from user and display all numbers in between that range.
// INPUT  :23   35
// OUTPUT :23   24  25  26  27  28  29  30  31  32  33  34  35

// INPUT  :10   18
// OUTPUT :10   11  12  13  14  15  16  17  18

// INPUT  :-10   2
// OUTPUT :-10  -9  -8  -7  -6  -5  -4  -3  -2  -1  0   1   2

// INPUT  :90   18
// OUTPUT :Invalid Range

#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt=0;
    if(iStart>iEnd)
    {
        printf("Invalid range");
    }

    for(iCnt=iStart; iCnt<=iEnd; iCnt++)
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