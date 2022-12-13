// Accept N number from user and accept one another numbrer as NO , 
// check whether NO is present or not.

/*
    INPUT :  N: 6
            NO: 66
            Elements: 85    66  3   66  93  88
    OUTPUT : TRUE

    INPUT :  N: 6
            NO: 12
            Elements: 85    11  3   15  11  111
    OUTPUT : FALSE
*/



#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength, int iNo)
{
    int iCnt=0; 
    int iFreq=0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iFreq=true;
            break;
       
         }
    }
    if(iCnt==iLength)
    {   
        return false;

    }
     
     return iCnt;
    
}

int main()
{
    int iCnt=0,  iValue=0, iSize=0;
    int*ptr=NULL;

    bool bRet= false;

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

    bRet=Check(ptr,iSize,iValue);

    if(bRet==true)
    {
        printf("Number is present\n");
    }
    else
    {
        printf("Number is not present\n");
    }

    free(ptr);

    return 0;
}