// write a pgm which accept N number from user and print all odd number up to N.


// INPUT  : 18
// OUTPUT : 1   3   5   7   9   11  13  15  17

#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt=0;

    for(iCnt=1; iCnt<=iNo; iCnt+=2)
    {
        if((iNo % iCnt !=1))//|| (iNo%iCnt !=0))
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue=0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}