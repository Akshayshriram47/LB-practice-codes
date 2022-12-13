//Accept one character from user and check whether that character is vowel (a,e,i,o,u) or not

// INPUT  : E
// OUTPUT : TRUE

// INPUT  : G
// OUTPUT : FALSE

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL chkVowel(char ch)
{
    if(ch== 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
		return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;

    printf("Enter a character\n");

    scanf("%c",&cValue);

    bRet=chkVowel(cValue);
    if (bRet==TRUE)
    {
        printf("it is vowel");
    }
    else
    {
        printf("it is consonant"); // it is not vowel
    }


    return 0;
}
