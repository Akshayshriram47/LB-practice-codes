
// Accept one number from user and print that number of * on screen using while loop
// INPUT : 5
// OUTPUT : *   *   *   *   *   *
// INPUT : 10
// OUTPUT : *   *   *   *   *   *   *   *   *   *   *   *

#include<stdio.h>
void Display(int iNo)
{
    
    while (iNo> 0)
    {
        printf("*\t");
        iNo--;
    }
    
}

int main()
{
    int iValue=0;
    printf("Enter a number:\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}