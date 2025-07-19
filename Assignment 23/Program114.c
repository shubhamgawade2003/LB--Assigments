//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Accept charactor from user and check wheather it is special symbol
//                       or not(!,@,#,$,%,^,&,*).
//
// Input : #
// Output: True
// Input : m
// Output: False
//
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

bool ChkSpecial(char ch)
{
    bool Flag = false;

    if ((ch == '@') || (ch == '#') || (ch == '$') || (ch == '%') || (ch == '^') || (ch == '&') || (ch == '*'))
    {
        Flag = true;
    }
    else
    {
        Flag = false;
    }
    return Flag;
}

int main()
{
    char cValue = '\0';
    bool bRet = false;
    printf("Enter the charactor\n");
    scanf("%c", &cValue);
    bRet = ChkSpecial(cValue);
    if (bRet == true)
    {
        printf("It is special Symbol");
    }
    else
    {
        printf("It is not a special symbol");
    }
    return 0;
}