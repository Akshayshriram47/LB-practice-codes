// Accept one number from user and print that number of * on screen 

#include<stdio.h>
void Accept(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*\t");
    }
}
int main()
{
    int iValue=0;
    //iValue=5;
    printf("Enter a number\n");
    scanf("%d",&iValue);

    Accept(iValue);

    return 0;
}