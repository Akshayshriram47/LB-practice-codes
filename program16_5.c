// Accept N number from user and return product of all odd elements

/*INPUT  :  N : 6
              Elements: 15  66  3    70  10  88
    OUTPUT : 45

    INPUT  :  N : 6
              Elements: 44  66  72    70  10  88
    OUTPUT : 0
*/

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int iCnt=0, iMult=1;

   for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if((Arr[iCnt] %2 ) != 0)
        {
            
            iMult = iMult*Arr[iCnt];
        }
    }
    return iMult;
}

int main()
{
    int iCnt=0, iSize=0, iRet=0;
    int *ptr=NULL;

    
    printf("Enter a number of elements\n");
    scanf("%d",&iSize);

   

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

    iRet=Product(ptr,iSize);

   printf("product %d",iRet);

    free(ptr);

    return 0;
}