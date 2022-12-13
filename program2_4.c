// Accept two number from user and display first number in second number of times

// Input:   12    5
// Output:  12   12  12  12  12

// Input:   -2    3
// Output:  -2   -2    -2

// Input:    21    -3
//Output:    21    21   21

//Input:    -2    0
// Output:   


#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    {
        printf("%d\t", iNo);
    }
    
}

int main()
{

    int iNo = 0;
    int iCount = 0;

    printf("Enter NUmber\n");
    scanf("%d",&iNo);

    printf("Enter Frequency\n");
    scanf("%d", &iCount);

    Display(iNo, iCount);

    return 0;
}