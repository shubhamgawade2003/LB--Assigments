//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :Accept one character fromuser and convertcase of that charactor
//
//
// Input  : a    Output : A
// Input  : D    Output : d
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
void DisplayConvert(char CValue)
{
    if (CValue >= 'A' && CValue <= 'Z')
    {
        printf("%c", CValue + 32);
    }
    else if (CValue >= 'a' && CValue <= 'z')
    {
        printf("%c", CValue - 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter charactor\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);
    return 0;
}