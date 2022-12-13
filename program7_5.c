//  write a program which accept N and print first 5 multiples of N

// INPUT  : 4
// OUTPUT : 4   8   12  16  20

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt=0;
    for(iCnt=1; iCnt<=5; iCnt++)
    {
        printf("%d\t",iCnt*iNo);
    }
}

int main()
{
    int iValue=0;
    printf("Enter a number\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}