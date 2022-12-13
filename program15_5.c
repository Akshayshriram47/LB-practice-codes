// Accept N number from user and accept one another number aas NO , retrun frequency of No from it.

/*
    INPUT  :  N : 6
              NO: 66
              Elements: 85  66  3    66  93  88
    OUTPUT : 2

    INPUT  :  N : 6
              NO: 12
              Elements: 85  66  3    66  93  88
    OUTPUT : 0
    
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt=0;
    int iFreq=0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFreq++;
        }
    }
    return iFreq;
}
int main()
{
    int iSize=0, iRet=0, iCnt=0, iValue=0;
    int *ptr=NULL;

    printf("Enter number of Elements\n");
    scanf("%d",&iSize);

    printf("Enter number\n");
    scanf("%d",&iValue);

    ptr = (int*) malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory ");
        return -1;
    }

    printf("Enter %d elements :",iSize);

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("Enter elements %d :",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet =Frequency(ptr,iSize,iValue);
    printf("%d",iRet);
    free(ptr);

    return 0;
}