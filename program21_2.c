// Accept number from user and display below pattern

// INPUT : iRow=4   iCol=4
// OUTPUT : 
/*          2   4   6   8   10
            1   3   5   7   9
            2   4   6   8   10
            1   3   5   7   9
*/
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int iCnt=0;
    int iCnt2=0;
    int k=0;
   
    

    for(iCnt=1; iCnt<=iRow; iCnt++ )
    {
        for(iCnt2=1; iCnt2<=iCol;iCnt2++)
        {
            if((iCnt2 %2 )!=0)
            {
                printf("%d\t",iCnt2*2);
                iCnt2++;
            
                
            }
            
        }
        
        printf("\n");
    }   
}

int main()
{
    int iValue1=0, iValue2=0;

    printf("Enter number of rows\n");
    scanf("%d",&iValue1);

    printf("Enter number of columns\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}