// write a program which accept number from user and return the count of digits in between 3 and 7.

// INPUT  : 2395
// OUTPUT : 1

// INPUT  : 1018
// OUTPUT : 0

// INPUT  : 4521
// OUTPUT : 2

// INPUT  : 9222
// OUTPUT : 0


#include<stdio.h>


int CountRange(int iNo)
{
    int iCnt=0;
    int iDigit=0;

    while (iNo!=0)
    {
        iDigit = iNo %10;

        if((iDigit>3)  && (iDigit < 7))  
        {
            iCnt++;
        }

        iNo= iNo/10;
    }
    return iCnt;
    


}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("%d",iRet);

    return 0;
}