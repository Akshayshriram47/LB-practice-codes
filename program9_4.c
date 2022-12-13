// Write a program to find odd factorial of given number

// INPUT  : 5
// OUTPUT : 15  (5*3*1)

// INPUT  : 5
// OUTPUT : 15  (5*3*1)

// INPUT  : 10
// OUTPUT : 945 (9*7*5*3*1)

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt=0;
    int iFact=1;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {

        if(iCnt%2 !=0)
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

    iRet = OddFactorial(iValue);
    printf("Even factorial is %d",iRet);

    return 0;

}