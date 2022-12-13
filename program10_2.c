// Write a program which accept width and height of rectangle from user and calculate its Area
// (Area = width * height)

// INPUT  : 5.3     9.78
// OUTPUT : 51.834

double RectArea(float fWidth , float fHeight)
{
    double fAr = 0.0;
    fAr = fWidth * fHeight;
    return fAr;


}

#include<stdio.h>
int main()
{
    float fValue1=0.0, fValue2 = 0.0;
    double dRet = 0.00;

    printf("Enter width\n");
    scanf("%f",&fValue1);

    printf("Enter height\n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of rectangle is %lf",dRet);

    return 0;
}