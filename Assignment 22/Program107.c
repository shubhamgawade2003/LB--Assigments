//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Accept Charactor from user and check weather it is Capital or not
//                      
//
// Input  : F
// output : charactor is capital
// Input  : d
// output : charactor is not capital
//
//
//////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdbool.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkCapital(char ch)
{
    bool Flag = false;

    if((ch>='A')&&(ch<='Z'))
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

    bRet =ChkCapital(cValue);
    if(bRet ==TRUE)
    {
        printf(" charactor is capital");

    }
    else
    {
        printf("it is not capital charactor");
    }
    return 0;
}
            
    