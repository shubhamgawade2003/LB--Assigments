//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Accept Charactor from user and check weather it is small case or not
//                      
//
// Input  : f
// output : Charactor is Small Case
// Input  : D
// output : Charactor is not small case
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

    if((ch>='a')&&(ch<='z'))
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
        printf(" charactor is Small case");

    }
    else
    {
        printf("it is not Small Case");
    }
    return 0;
}
            
    