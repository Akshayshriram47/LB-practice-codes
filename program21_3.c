// Accept number from user and display below pattern

// INPUT : iRow=5   iCol=5

// OUTPUT : 
/*          a   b   c   d   e
            1   2   3   4   5
            a   b   c   d   e
            1   2   3   4   5
            a   b   c   d   e
*/
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int iCnt=0;
    int iCnt2=0;
    int k=0;
    char ch = 'a';
   
    

    for(iCnt=1; iCnt<=iRow; iCnt++ )
    {
        for(iCnt2=1; iCnt2<=iCol;iCnt2++)
        {
            if(iCnt %2 ==0)
           {
             printf("%c\t",ch);
             ch++;
              
             
           }
            
        }
        ch='a';
        
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