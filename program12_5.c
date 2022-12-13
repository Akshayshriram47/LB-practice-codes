// write a program which accept number from user and count frequency of such a digits which are less than 6

// INPUT  :2395
// OUTPUT : 3

// INPUT  : 1018
// OUTPUT : 3
 
// INPUT  : 9440
// OUTPUT : 3

// INPUT  : 96674
// OUTPUT : 1

#include<stdio.h>

int Count(int iNo)
{
    int iCnt=0, iDigit=0;

    while (iNo !=0)
    {
        iDigit=iNo%10;
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

    printf("Enter a number\n");
    scanf("%d",&iValue);

    iRet= Count(iValue);
    printf("%d",iRet);
    return 0;

}
