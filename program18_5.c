// Accept number from user and display below pattern

// INPUT : 10
// OUTPUT : 2   4   6   8   10  12  14  16  18  20
#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt=0;
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
       
       printf("%d\t",iCnt*2);

    }
}
int main()
{
    int iValue=0;

    printf("Enter number of elements\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}