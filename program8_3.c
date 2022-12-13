// Write a program to find factorial of given number

// INPUT  : 5
// OUTPUT : 120  (5*4*3*2*1)

// INPUT  : -5
// OUTPUT : 120  (5*4*3*2*1)

// INPUT  : 4
// OUTPUT : 24   (4*3*2*1)


#include<stdio.h>

int Factorial(int iNo)
{
    int iMult=1, iCnt=0;

    if(iNo<0)  // updator
    {
        iNo=-iNo;
    }

   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
        iMult = iMult *iCnt;
   }
    return iMult;
}

int main()
{
    int iValue=0, iRet=0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);

    printf("Factorial of number is %d",iRet);

    return 0;


}