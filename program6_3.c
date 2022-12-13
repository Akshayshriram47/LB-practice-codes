// Write a program which Accept two numbers and check whether numbers are equal or not

// INPUT  : 10  10
// OUTPUT : Equal

// INPUT  : 10  12
// OUTPUT : Not Equal



#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define False 0

BOOL CheckEqual(int iNo1, int iNo2)
{
    if(iNo1==iNo2)
    {
        return 1;
    }
    else
    {
        return 0;

    }
}

int main()
{
    int iValue1=0, iValue2=0;
    BOOL bRet=False;

    printf("Please enter two numbers:\n ");
    scanf("%d", &iValue1);
    scanf("%d", &iValue2);

    bRet=CheckEqual(iValue1,iValue2);

    if(bRet==TRUE)
    {
        printf("EQUAL");
    }
    else
    {
        printf("NOT EQUAL");
    }

    return 0;
}