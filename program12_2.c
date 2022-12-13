// Write a program which accept number from user and check whether it contains 0 in it or not
//
// INPUT  : 2365
// OUTPUT : There is no Zero

// INPUT  : 1018
// OUTPUT : It contains Zero

// INPUT  : 9000
// OUTPUT : It contains Zero

// INPUT  : 10687
// OUTPUT : It contains Zero


#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit=0;
    int iCnt=0;

    while (iNo !=0)
    {
        iDigit=iNo%10;
        iNo=iNo/10;
    
        if(iDigit ==0  || iDigit==1)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }
}
int main()
{
    int iValue=0;
    BOOL bRet=FALSE;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    bRet=ChkZero(iValue);

    if(bRet==TRUE)
    {
        printf("It contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }
   
   
    return 0;



}
