// write a program which accept number from user and return the multiplication of digits.

// INPUT  : 2395
// OUTPUT : 270

// INPUT  : 1018
// OUTPUT : 8

// INPUT  : 9440
// OUTPUT : 144

// INPUT  : 922432
// OUTPUT : 864


#include<stdio.h>


int MultDigit(int iNo)
{
    //int iCnt=0;
    int iDigit=0;
    int iMul=1;

    while (iNo!=0)
    {
        iDigit = iNo %10;

        if(iDigit==0)
        {
            iDigit=1;
        }
        iMul = iMul * iDigit;

        
        
        iNo = iNo /10;

    

         
        
       
    }
    return iMul;
    


}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    iRet = MultDigit(iValue);

    printf("%d",iRet);

    return 0;
}