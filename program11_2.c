// Write a program which accept range from user and display all even numbers in between that range

// INPUT  : 25  35
// OUTPUT : 26 28 30 32 34

// INPUT  : -10   2
// OUTPUT : -10 -8  -6  -4  -2  0   2

// INPUT  : 90  18
// OUTPUT : Invalid Range

#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt=0;

    if(iStart>iEnd)
    {
        printf("Invalid Range");
    }

    for(iCnt=iStart; iCnt<=iEnd;iCnt++)
    {
        if(iCnt%2 == 0)
        {
            printf("%d\t",iCnt);
        }
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