// write a program which accept one number from user and print that number of
// even numbers on screen 

// INPUT :  7
// OUTPUT : 2   4   6   8   10  12  14

#include<stdio.h>
void PrintEven(int iNo)
{
    

    if(iNo<=0)
    {
        return ;
    }

    int iCnt=0;
    int iCount=0;
    int i=0;


    for(i=1; (iNo!=iCount); i++)
    {
        if(i%2 == 0  )
        {
            printf("%d\n",i);
            iCount++;
        }
        
        
    }


}

int main()
{
    int iValue=0;
    printf("Enter number\n");

    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}