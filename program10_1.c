
// Write a program which accpet radius of circle from user and calculates its area.
// Consider value of PI as 3.14.(Area = PI * Radius*Radius)

// INPUT  : 5.3
// OUTPUT : 88.2026

// INPUT  : 10.4
// OUTPUT : 339.6224

#include<stdio.h>

double CircleArea(float fRadius)
{
    float PI=3.14;

    float iAns=0;
    iAns = PI * fRadius * fRadius;

    return iAns;
}

int main()
{
    float fValue=0;
    double dRet=0.00;

    printf("Enter a Radius\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);
    printf("Area of circle is %f",dRet);
    return 0;
}