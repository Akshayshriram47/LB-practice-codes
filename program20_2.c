// Accept number from user and display below pattern

// INPUT : iRow=4    iCol=4
// OUTPUT : 
/*          A   B   C   D
            a   b   c   d
            A   B   C   D
            a   b   c   d

*/
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int iCnt=0;
    int iCnt2=0;
    char ch='A';
    char ch1='a';

    for(iCnt=1; iCnt<=iRow; iCnt++ )
    {
        for(iCnt2=1; iCnt2<=iCol;iCnt2++)
       
        {
            if(iCnt % 2 !=0)
            {
                printf("%c\t",ch);
                ch++;
            }
            else
            {
                printf("%c\t",ch1);
                ch1++;
            }
        }
        ch='A';
        ch1='a';
       
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