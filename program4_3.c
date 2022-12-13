// Write a program which accept number from user and display all its non factors.

// INPUT : 12
// OUTPUT: 5    7   8   9   10  11


// INPUT : 13
// OUTPUT: 2    3   4   5    6  7   8   9   10  11  12


// INPUT : 10
// OUTPUT: 3    4   6    7   8   9

#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt=0;

    for(iCnt=1; iCnt<iNo; iCnt++)
    {
        if(iNo%iCnt!=0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue=0;

    printf("Entr a number\n");
    scanf("%d",&iValue);

    NonFact(iValue);
    return 0;

}


