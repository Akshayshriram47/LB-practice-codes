// Write a program which Accept number from user and display its digit in reverse
/*
INPUT  :2395
OUTPUT :5   
        9   
        3
        2


INPUT  : 1018
OUTPUT :8   
        1   
        0
        1

INPUT  : -1018
OUTPUT :8
        1
        0
        1

INPUT  :9000
OUTPUT :0
        0
        0
        9
*/

#include<stdio.h>
void DisplayDigit(int iNo)
{
    int iDigit=0;
    int iRev=0;


    if(iNo<0)
    {
        iNo = -iNo;
    }
    while (iNo !=0)
    {
        iDigit= iNo%10 ;
        
        iRev = (iRev*10) + iDigit;
        printf("%d\n",iDigit);
        iNo= iNo/10;
    }
    
}
int main()
{
    int iValue=0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);
    return 0;
}