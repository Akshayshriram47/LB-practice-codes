// Write a program to find even factorial of given number

// INPUT  : 5
// OUTPUT : 8  (4*2)

// INPUT  : -5
// OUTPUT : 8  (4*2)

// INPUT  : 10
// OUTPUT : 3840 (10*8*6*4*2)

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt=0;
    int iFact=1;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {

        if(iCnt%2 ==0)
        {
            iFact=iFact*iCnt;
        }
    }
    return iFact;

}

int main()
{
    int iValue=0, iRet=0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);
    printf("Even factorial is %d",iRet);

    return 0;

}