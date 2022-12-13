// Write a program which accept number from user and print even factor of that number.
//INPUT : 24
// OUTPUT: 1    2   4   6   8   12  

#include<stdio.h>

int DisplayFactor(int iNo)
{
    int i=0;

    if(iNo<=0)
    {
        iNo=-iNo;

    }

    for(i=1; i<iNo; i++)
    {
        if( iNo % i== 0)
        {
            printf("%d\t",i);
        }
    }
}
int main()
{
    int iValue=0;

    printf("Enter a number\n");

    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}