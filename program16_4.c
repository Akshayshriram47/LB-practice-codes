// Accept N number from user accept Range , Display all elements from that range

/*
    Input :     N: 6
             Start : 60
             End   : 90
             Elements: 85    66  3   76  93  88
    Output: 85  66  76  88

    Input :     N: 6
             Start : 30
             End   : 50
             Elements: 85    66  3   76  93  88
    Output:     
*/

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iNo,int iData)
{
    int iCnt=0;
    int iStart=0, iEnd=0;
    
   for(iCnt=0; iCnt<iLength; iCnt++)
    {
       if((Arr[iCnt] >= iNo) && (Arr[iCnt]<=iData))
       {
            printf("%d\t", Arr[iCnt]);
       }
    }
    
}

int main()
{
    int iCnt=0,  iValue=0, iSize=0, iData=0; //iRet=0;
    int *ptr=NULL;

    
    printf("Enter a number of elements\n");
    scanf("%d",&iSize);

    printf("Enter a start elements\n");
    scanf("%d",&iValue);

    printf("Enter a upto end elements\n");
    scanf("%d",&iData);

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

    Range(ptr,iSize,iValue,iData);

   
    free(ptr);

    return 0;
}