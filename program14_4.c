// Accept N numbers from user and display all such elements which are   divisible by 5 and 3.

// INPUT  : N  : 6
//          Elements : 85   66  3   15  93  88
// OUTPUT : 15


#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt=0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if((Arr[iCnt] %3 ==0) && (Arr[iCnt] %5 ==0))
        {
            printf("%d",Arr[iCnt]);
        }
    }
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

    Display(ptr,iSize);

    free(ptr);

    return 0;
}