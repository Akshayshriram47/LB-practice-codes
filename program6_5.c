// Write a pgm which accept total marks and obtained marks from user and calculate percentage

// INPUT  : 1000    745
// OUTPUT : 74.5%

#include<stdio.h>

float percentage(int iNo1,int iNo2)
{
    float iPer = 0.0f;
    float fValue=0.0f;

    int c=100;

    iPer =c*iNo2;
    fValue=iPer/iNo1;
    
    return fValue;
}

int main()
{
    int iValue1=0, iValue2=0;
    float fRet=0.0;

    printf("Enter total marks\n");
    scanf("%d",&iValue1);

    printf("Enter obtained marks\n");
    scanf("%d",&iValue2);

    fRet= percentage(iValue1,iValue2);

    printf("Percentage is %f \n",fRet);

    return 0;
}