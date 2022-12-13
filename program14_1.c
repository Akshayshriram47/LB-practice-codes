// Accept N numbers from user and return difference between summation of even elements and summation of odd elements.

// INPUT  :  N  : 6
//          Elements : 85  66  3  80  93  88
// OUTPUT : 53  (234-181)


#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
    int iCnt=0, iEven=0, iOdd=0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if((Arr[iCnt]) %2 == 0)
        {
            iEven=iEven+Arr[iCnt];
        }
        else
        {
            iOdd= iOdd+Arr[iCnt];
        }
    }
    return iEven-iOdd;

}

int main()
{
    int iSize=0, iRet=0, iCnt=0;
    int *ptr=NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    ptr=(int*) malloc (iSize*(sizeof(int)));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d the elements : ",iSize);

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("Enter elments %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Difference(ptr,iSize);

    printf("Result is %d",iRet);

    free(ptr);

    return 0;


}