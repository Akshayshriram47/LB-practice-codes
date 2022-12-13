// Accept N numbers from user check whether that numbers contains 11 in or not.

// INPUT  :     N : 6
//          Elements: 85    66  11   80  93  88  
// OUTPUT :  11 is present

// INPUT  :     N : 6
//          Elements: 85    66  05   80  93  88  
// OUTPUT :  11 is absent

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FLASE 0
typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
    int iCnt=0;
    BOOL bRet=0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
       if(Arr[iCnt]==11)
       {
            bRet=TRUE;
            break;
       }
    }
    if(iCnt == iLength)
    {
        bRet = FLASE;
    }
    return bRet;
    
}

int main()
{
    int iSize=0, iRet=0, iCnt=0;
    int *ptr=NULL;
    BOOL bRet=FLASE;

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

    bRet =Check(ptr,iSize);

    if(bRet==TRUE)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }

    free(ptr);

    return 0;
}