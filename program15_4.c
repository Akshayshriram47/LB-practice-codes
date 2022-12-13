// Accept N number from user and return frequency of 11 from it

/* INPUT  :  N: 6
            Elements: 85    66  3   15  93  88
    OUTPUT : 0

    INPUT  :  N: 6
            Elements: 85    11  3   11  93  111
    OUTPUT : 2


*/
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt=0;
    int iFreq=0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]    ==  11)
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

    iRet =Frequency(ptr,iSize);
    printf("%d",iRet);
    free(ptr);

    return 0;
}