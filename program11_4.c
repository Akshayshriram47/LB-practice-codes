// Write a program which accpet range from user and return addition of all even numbers in between that range.
// (range should contains positive numbers only)

// INPUT  :23   30
// OUTPUT :108

// INPUT  :10   18
// OUTPUT :70

// INPUT  :-10  2
// OUTPUT : Invalid Range

// INPUT  : 90  18
// OUTPUT : invalid Range

#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
     int iSum=0, iAns=0, iCnt=0;

    
    if(iStart<iEnd && iStart<0)
    {
        printf("Invalid range\n");
    }
   for(iCnt=iStart; iCnt<=iEnd; iCnt++)
    {
        if(iCnt%2==0)
        {
               iSum=iSum+iCnt;
        }
    }
    return iSum;
}
int main()
{
    int iValue1=0, iValue2=0, iRet=0;

    printf("Enter starting point\n");
    scanf("%d",&iValue1);

    printf("Enter ending point\n");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1,iValue2);

    printf("Addition is %d",iRet);
    
    return 0;
}