// write a program which accept nuber from user and return the count of odd digits.

// INPUT  : 2395
// OUTPUT : 3

// INPUT  : 1018
// OUTPUT : 2

// INPUT  : -1018
// OUTPUT : 2
 
// INPUT  : 8462
// OUTPUT : 0


#include<stdio.h>

int CountOdd(int iNo)
{
    int iCnt=0, iDigit=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    while (iNo!= 0)
    {
        iDigit= iNo%10;
        
        if (iDigit %2 != 0)
        {
            iCnt++;
        }
        iNo=iNo/10;
        
    }
    return iCnt;
    
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet=CountOdd(iValue);
    
    printf("%d",iRet);

    return 0;
}