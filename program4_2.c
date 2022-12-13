// write a program which accept number from user and display its factors in decreasing order

//INPUT : 12
// OUTPUT: 6    4   3   2   1


//INPUT : 13
// OUTPUT:  1


//INPUT : 10
// OUTPUT: 5    2   1

#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt=0;
   

    for(iCnt=iNo-1; iCnt>=1; iCnt--)
    {
        if(iNo%iCnt==0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue=0;

    printf("enter a number\n");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}