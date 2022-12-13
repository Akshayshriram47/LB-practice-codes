// Accept number from user and display below pattern

// INPUT : iRow=4   iCol=4
// OUTPUT : 
/*          1   2   3   4
            5   6   7   8
            9   1   2   3
            4   5   6   7

*/
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int iCnt=0;
    int iCnt2=0;
    int k=1;
    
    

    for(iCnt=1; iCnt<=iRow; iCnt++ )
    {
        for(iCnt2=1; iCnt2<=iCol;iCnt2++)
        {
            if(k==10)
            {
                k=1;
            }
            printf("%d\t",k++);
           
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