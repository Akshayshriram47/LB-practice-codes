// Accept number from user and display below pattern

// INPUT : iRow=4   iCol=5
// OUTPUT : 
/*          4   4   4   4   4
            3   3   3   3   3
            2   2   2   2   2
            1   1   1   1   1

*/
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int iCnt=0;
    int iCnt2=0;
    char ch='A';

    for(iCnt=iRow; iCnt>=1; iCnt--)
    {
        for(iCnt2=iCol; iCnt2>=1;iCnt2--)
       
        {
           printf("%d\t",iCnt);
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