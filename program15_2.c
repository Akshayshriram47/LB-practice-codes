// Accept N numbers from user return difference between frequency of even numbers and odd numbers.

// INPUT  :     N : 7
//          Elements: 85    66  3   80  93  88  90
// OUTPUT :  1  (4-3)

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iCnt=0;
    int iDiff=0;
    int iEven=0, iOdd=0;
    
    for(iCnt=0; iCnt<iLength; iCnt++)
    {
       if(Arr[iCnt] %2==0)
       {

            iEven++;
        }
        else
        {
            iOdd++;
        }
       
        
    }
    return iEven-iOdd ;
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
    printf("Diff between Frequency of even and odd numbers is %d : ", iRet);

    free(ptr);

    return 0;
}