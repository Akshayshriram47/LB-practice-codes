
// Write a program which accept number from user and if number is
// less than 50 then print small, if it is greater than 50and less than
// 100 then print medium, if it is greater than 100 then print large

// INPUT : 75
// OUTPUT: Medium

// INPUT : 40
// OUTPUT: Small

// INPUT : 111
// OUTPUT: Large

#include<stdio.h>

void Number(int iNo)
{
    if(iNo<50)
    {
        printf("small\n");
    }
    if((iNo>50) && (iNo<100))
    {
        printf("Medium\n");
    }
    if(iNo>=100)
    {
        printf("Large\n");

    }
}


int main()
{

    int iValue=0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}