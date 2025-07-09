//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Accept Charactor from user and check weather it is digit or not
//                      
//
// Input  : 5
// output : It is Digit
// Input  : d
// output : It is not a digit
//
//
//////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdbool.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkDigit(char ch)
{
    bool Flag = false;

    if((ch>='0')&&(ch<='9'))
    {
        Flag =TRUE;
    }
    else
    {
        Flag =FALSE;
    }
    return Flag;
}


int main()
{
    char cValue ='\0';
    bool bRet =false;

    printf("Enter the charactor\n");
    scanf("%c",&cValue);

    bRet =ChkDigit(cValue);
    if(bRet ==TRUE)
    {
        printf(" it is Digit");

    }
    else
    {
        printf("it is not a digit");
    }
    return 0;
}
            
    