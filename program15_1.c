// Accept N numbers from user return frequency of even numbers.

// INPUT  :     N : 6
//          Elements: 85    66  3   80  93  88
// OUTPUT :  3


#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iCnt=0;
    int iFreq=0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if((Arr[iCnt]%2) ==0)
        {
            iFreq++;
        }
    }
    return iFreq;
}

int main()
{
    int iSize=0, iRet=0, iCnt=0;
    int *ptr=NULL;

    printf("Enter number of Elements\n");
    scanf("%d",&iSize);

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

    iRet =CountEven(ptr,iSize);
    printf("Frequency of even numbers is %d : ", iRet);

    free(ptr);

    return 0;
}