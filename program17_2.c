// Accept N number from user and return the smallest number

/*
    INPUT :  N : 6
            Elements : 85   66  3   66  93  88
    Output: 3
*/

#include<stdio.h>
#include<stdlib.h>

int SmallNumber(int Arr[], int iData)
{
    int iCnt=0;
    int iMin=Arr[0];


    for(iCnt=0; iCnt<iData; iCnt++)
    {
        if(Arr[iCnt] <iMin)
        {
            iMin = Arr[iCnt];

        }
    }
    return iMin;
}

int main()
{
    int iCnt=0, iRet=0, iSize=0;
    int * ptr = NULL;


    printf("Enter the elements of array\n");
    scanf("%d",&iSize);

    ptr = (int*) malloc (sizeof(int)*iSize);

    printf("Enter %d elements",iSize);

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("Enter elements %d :",iCnt+1);
        scanf("%d",&ptr[iCnt]);

    }

    if(ptr == NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }

    iRet=SmallNumber(ptr,iSize);

    printf("%d",iRet);

    free(ptr);

    return 0;
}