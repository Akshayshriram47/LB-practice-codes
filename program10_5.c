// Write a program which accept area in square feet and convert it into square meter.
//(1 square feet = 0.0929 square meter)

// INPUT  : 5
// OUTPUT : 0.464515

// INPUT  : 7
// OUTPUT : 0.650321

#include<stdio.h>

double Sqmeter(float fNo)
{
    float fAns=0;
    float fSQ = 0.0929;

    fAns = fNo * fSQ;
    return fAns;

}
int main()
{
    float fValue=0.0, fRet=0.0;

    printf("Area in square feet\n");
    scanf("%f",&fValue);

    fRet = Sqmeter(fValue);

    printf("suare meter %f",fRet);

}

