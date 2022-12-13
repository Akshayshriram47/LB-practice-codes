// Write a program which accept distance in kilometer and convert it into meter.
// (1 kilometer = 1000 Meter)

// INPUT  : 5
// OUTPUT : 5000

// INPUT  : 12 
// OUTPUT : 12000


#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iAns=0;
    int KM=1000;

    iAns = iNo * KM;
    return iAns;
}

int main()
{
    int iValue = 0, iRet=0;

    printf("Enter distance\n");
    scanf("%d",&iValue);

    iRet= KMtoMeter(iValue);
    printf(" Meter %d",iRet);

    return 0;
}