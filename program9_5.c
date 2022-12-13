// write a program which returns difference between Even factorial and Odd factorial of given number

// INPUT  : 5
// OUTPUT : -7  (8-15)

// INPUT  : -5
// OUTPUT : -7 (8-15)

// INPUT  : 10
// OUTPUT : 2895  (3840-945)

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt=0;
    int iFact1=1, iFact2=1;
    int iDiff=0;


    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2 == 0)
        {
            iFact1 = iFact1*iCnt;
        }
        else
        {
            iFact2 = iFact2*iCnt;
        }    
    }

    iDiff = iFact1 - iFact2;

    return iDiff;

}

int main()
{
    int iValue=0, iRet=0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial Difference is %d",iRet);
    return 0;

}