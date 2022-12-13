// Write a program which accept number from user and return summation of all its non factors

//INPUT : 12
// OUTPUT: 50


//INPUT : 10
// OUTPUT: 37

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt=0;
    int iFact=0;

    for(iCnt=1; iCnt<iNo; iCnt++)
    {
        if(iNo%iCnt!=0)
        {
           
            iFact=iFact+iCnt;
        }
      
    }
     return iFact;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=SumNonFact(iValue);

    printf("%d",iRet);
    return 0;

}

