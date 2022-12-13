// Accept N number from user and accept one another number as NO, retu4rn index of first occurance of that no
/*
    INPUT :  N: 6
            NO: 66
            Elements: 85    66  3   66  93  88
    OUTPUT : 1

    INPUT :  N: 6
            NO: 12
            Elements: 85    11  3   15  11  111
    OUTPUT : -1
*/

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int iCnt=0;

   for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            break;
       
         }
    }
    if(iCnt==iLength)
    {   
        return -1;

    }
    else
    {
        return iCnt;
    }
}

int main()
{
    int iCnt=0,  iValue=0, iSize=0, iRet=0;
    int *ptr=NULL;

    
    printf("Enter a number of elements\n");
    scanf("%d",&iSize);

    printf("Enter a elements\n");
    scanf("%d",&iValue);

    ptr=(int*) malloc (iSize*sizeof(int));

    if(ptr==NULL)
    {
        printf("Unable to allocate memory\n");
        return-1;
    }

    printf("Enter %d elements",iSize);

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("Enter elements %d :",iCnt+1);
        scanf("%d",&ptr[iCnt]);

    }

    iRet=FirstOcc(ptr,iSize,iValue);

    if(iRet== -1)
    {
        printf("There is no such Number\n");
    }
    else
    {
        printf("First occurance of number is %d :%d",iValue,iRet);
    }

    free(ptr);

    return 0;
}