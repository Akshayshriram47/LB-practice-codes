// Write a program which accept range from user and return addition of all numbers in between
// that range.(Range should contains positive numbers only)

// INPUT  :23   30
// OUTPUT :212

// INPUT  :10   18
// OUTPUT :126

// INPUT  :-10  2
// OUTPUT : Invalid Range

// INPUT  : 90  18
// OUTPUT : invalid Range

#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iSum=0, iAns=0, iCnt=0;

    
    if(iStart<iEnd && iStart<0)
    {
        printf("Invalid range\n");
    }
   for(iCnt=iStart; iCnt<=iEnd; iCnt++)
    {
    
        iSum=iSum+iCnt;
    }
    return iSum;
}
int main()
{
    int ivalue1=0, iValue2=0;
    int iRet=0;

    printf("Enter starting point\n");
    scanf("%d",&ivalue1);

    printf("Enter ending point\n");
    scanf("%d",&iValue2);

    iRet = RangeSum(ivalue1,iValue2);

    printf("Addition is %d",iRet);
    
    return 0;
}