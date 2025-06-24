//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :Accept a charactor from user and check whether that charactor is vowel
//                    (a,e,i,o u)
//
// Input  : E         Output : TRUE
// Input  : d         Output : False
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

#define true 1
#define false 0

bool ChkVowel(char CValue)
{

    if (CValue == 'a' || CValue == 'e' || CValue == 'i' || CValue == 'o' || CValue == 'u' ||
        CValue == 'A' || CValue == 'E' || CValue == 'I' || CValue == 'O' || CValue == 'U')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter Charactor\n");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if (bRet == 1)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}