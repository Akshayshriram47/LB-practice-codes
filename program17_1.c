// Accept N number from user and return the largest number

/*
    INPUT :  N : 6
            Elements : 85   66  3   66  93  88
    Output: 93
*/

#include<stdio.h>
#include<stdlib.h>

int LarNumber(int Arr[], int iData)
{
    int iCnt=0;
    int iMax=0;


    for(iCnt=0; iCnt<iData; iCnt++)
    {
        if(Arr[iCnt] >iMax)
        {
            iMax = Arr[iCnt];

        }
    }
    return iMax;
}

int main()
{
    int iCnt=0, iRet=0, iSize=0, iValue=0;
    int * ptr = NULL;


    printf("Enter the elements of array");
    scanf("%d",&iValue);

    ptr = (int*) malloc (sizeof(int)*iSize);

    printf("Enter %d elements",iValue);

    for(iCnt=0; iCnt<iValue; iCnt++)
    {
        printf("Enter elements %d :",iCnt+1);
        scanf("%d",&ptr[iCnt]);

    }

    if(ptr == NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }

    iRet=LarNumber(ptr,iValue);

    printf("%d",iRet);

    free(ptr);

    return 0;
}