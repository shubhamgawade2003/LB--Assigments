//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Accept Charactor from user and check weather it is alphabet or not
//                      (A-Z a-z)
//
// Input  : F
// output : TRUE
// Input  : &
// output : FALSE
//
//
//////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdbool.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    bool Flag = false;
    if(((ch>='A')&&(ch<='Z'))||((ch>='a')&&(ch<'z')))
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

    bRet =ChkAlpha(cValue);
    if(bRet ==TRUE)
    {
        printf("It is charactor");

    }
    else
    {
        printf("It is not charactor");
    }
    return 0;
}
            
    