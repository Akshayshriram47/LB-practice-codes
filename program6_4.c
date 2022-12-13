// Write a pgm which accept three numbers and print its multiplication

// INPUT  : 5   4   7
// OUTPUT : 140

// INPUT  : 5   0   7
// OUTPUT : 35

// INPUT  : 5   0   0
// OUTPUT : 0

// INPUT  : 0   0   0
// OUTPUT : 0

#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMult=0;

    if(iNo1==0)
    {
        return iNo2 * iNo3;
    }
    if(iNo2==0)
    {
        if(iNo3==0)
        {
            return iNo1;
        }
        return iNo1 * iNo3;
    }
    if(iNo3==0)
    {
        return iNo1 * iNo2;
    }
    
    iMult=iNo1* iNo2* iNo3;
    return iMult; 


}

int main()
{
    int iValue1=0, iValue2=0, iValue3=0, iRet=0;

    printf("Please enter three numbers:\n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet=Multiply(iValue1,iValue2,iValue3);
    printf("Multiplication is : %d",iRet);

    return 0;
}