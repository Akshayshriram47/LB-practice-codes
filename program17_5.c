// Accept N number from user and display summation of digit of each number.

/*
    INPUT :  N : 6
            Elements : 8225   665  3   76  953  858
    Output: 17     17   3   13  17  21          
*/

#include<stdio.h>
#include<stdlib.h>

void DigitSum(int Arr[], int iNo)
{
    int iCnt=0;
    int iDigit=0;
    int Copy=0;
    int iSum=0;
    
   for(iCnt=0; iCnt<iNo; iCnt++)
   {
        Copy=Arr[iCnt];

        while (Copy!=0)
        {
            iDigit=Copy%10;
            iSum=iDigit+iSum;

            iDigit++;

            Copy= Copy /10;
        }
            printf("%d\t",iSum);
        

        iSum=0;
        
   }
    
}
    

int main()
{
    int iCnt=0, iRet=0, iSize=0;
    int * ptr = NULL;


    printf("Enter the elements of array\n");
    scanf("%d",&iSize);

    ptr = (int*) malloc (sizeof(int)*iSize);

    printf("Enter %d elements",iSize);

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("Enter elements %d :",iCnt+1);
        scanf("%d",&ptr[iCnt]);

    }

    if(ptr == NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }

    DigitSum(ptr,iSize);


    free(ptr);

    return 0;
}