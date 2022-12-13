// Accept single digit number from user and print it into word

// INPUT  : 9
// OUTPUT : nine

// INPUT  : -3
// OUTPUT : Three

// INPUT  : 12
// OUTPUT : Invalid Number

#include<stdio.h>

void Display(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    
    switch(iNo)
     {
          case 0:
               printf("ZERO");
               break;
          case 1:
               printf("ONE");
               break;
          case 2:
               printf("TWO");
               break;
          case 3:
               printf("THREE");
               break;
          case 4:
               printf("FOUR");
               break;
          case 5:
               printf("FIVE");
               break;
          case 6:
               printf("SIX");
               break;
          case 7:
               printf("SEVEN");
               break;
          case 8:
               printf("EIGHT");
               break;
          case 9:
               printf("NINE");
               break;
          default:
               printf("Invalid Number");
     }
}

int main()
{
    int iValue=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}