// Write a program which accept number from user and return difference between summation of all its factors and non factors

// INPUT : 12
// OUTPUT: -34  (16-50)


// INPUT : 10
// OUTPUT: -29  (8-37)

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt=0;
    int iFact=0;
    int iFact1=0;

    for(iCnt=1; iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            
            iFact=iFact+iCnt;
        }
        else
         {
            iFact1=iFact1+iCnt;
        }
        
    }
    return iFact-iFact1;
    
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter a  number\n");
    scanf("%d",&iValue);
    
    iRet  = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}