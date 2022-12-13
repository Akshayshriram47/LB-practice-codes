// write a program which accept number from user and display its multiplication of factors

// INPUT  : 12
// OUTPUT : 144   (1*2*3*4*6)


// INPUT  : 13
// OUTPUT : 1   (1)


// INPUT  : 10
// OUTPUT : 10   (1*2*5)

#include<stdio.h>

int MulFact(int iNo)
{
    int iCnt=0;
    int iFact=1;

    for(iCnt=1; iCnt<iNo; iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iFact=iFact*iCnt;
        }
        
        
    }
    return iFact;

}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter a number");
    scanf("%d",&iValue);

    iRet=MulFact(iValue);
    printf("%d",iRet);
    return 0;

}
