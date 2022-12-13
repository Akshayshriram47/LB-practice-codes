// Write a program which accept number from user and print that number of $ and * on screen

// INPUT  : 5
// OUTPUT : $    *   $   *   $   *  $   *   $   *

// INPUT  : 3
// OUTPUT : $    *   $   *   $   *  

// INPUT  : -3
// OUTPUT : $    *   $   *   $   *  

#include<stdio.h>

void pattern(int iNo)
{
int iCnt=0;


if(iNo<0)   // filter
{
    iNo = -iNo;
}

while (iNo>iCnt)
{
    printf("$\t *\t");
    iCnt++;
}
}



int main()
{

    int iValue=0;
    printf("Enter a number\n");
    scanf("%d",&iValue);

    pattern (iValue);

    return 0;
}