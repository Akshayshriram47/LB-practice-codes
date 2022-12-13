// Write a program  which accept temperature in farhenheit and convert it into celsius.
//(1 celsius = (Fahrenheit-32)*(5/9))

// INPUT  : 10
// OUTPUT : -12.2222   ((10-32)*(5/9))

// INPUT  : 34
// OUTPUT : 1.11111   ((34-32)*(5/9))

#include<stdio.h>

double FHtoCEL(float fTemp)
{
    float fAns=0.0 , fTemps = 0.0, iret=0.0;
    
    // fAns=(fTemps-32);

    // iret = fAns/1.8;
    // return fAns;

    fAns = ((fTemp-32)*(0.5556));
    return fAns;
}

int main()
{
    float fValue = 0.0;
    double dret = 0.0;

    printf("Enter temp in Fahrenheit\n");
    scanf("%f",&fValue);

    dret = FHtoCEL(fValue);
    printf("Temp in %f",dret);
    return 0;
}