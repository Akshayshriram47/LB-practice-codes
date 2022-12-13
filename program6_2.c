// Write a program which accept one number from user and check whether that number is greater than 100 or not.

// INPUT  : 101
// OUTPUT :Greater

// INPUT  : 50
// OUTPUT : smaller


#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Chkgreater(int iNo)
{
    if (iNo>100)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
}

int main()
{
    int iValue=0;

    BOOL bRet=FALSE;

    printf("Enter a number:\n");
    scanf("%d",&iValue);

    bRet=Chkgreater(iValue);

    if(bRet==TRUE )
    {
        printf("Number is Greater");
    }
    else
    {
        printf("Number is Smaller");
    }
    return 0;
}