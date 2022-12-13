// write a program which accept number from user and return difference between Summation of even digits and summation of odd digits.

// INPUT  : 2395
// OUTPUT : -15 (2-17)

// INPUT  : 1018 
// OUTPUT : 6 ( 8-2)

// INPUT  : 8440 
// OUTPUT : 16 (16-0)

#include<stdio.h>

int CountDiff(int iNo)
{
    int iCnt=0,iCnt1=0, iDigit=0;
    int iDiff=0;

    
    iCnt=0;
    while (iNo!= 0)
    {
        iDigit= iNo%10;
        
        if (iDigit %2 == 0)
        {
            iCnt=iCnt + iDigit;

        }
        else
        {
             iCnt1=iCnt1 + iDigit;
        }

        iNo=iNo/10;

        
        
        
    }
    return iCnt-iCnt1;
    
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet=CountDiff(iValue);
    
    printf("%d",iRet);

    return 0;
}