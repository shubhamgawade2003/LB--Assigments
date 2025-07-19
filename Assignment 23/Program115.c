//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Accept charactor from user and display its ASCII value in decimal,
//                      octal, and hexadecimal format.
//
// Input : A
// Output: Decimal     65
//         Octal       0101
//         Hexadecimal 0x01
//
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayAscii(char ch)
{

    printf("Charactor\t%c\nDecimal\t%d\nHexadecimal\t0x%x\nOctal\t%o\n", ch, ch, ch, ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the charactor\n");
    scanf("%c", &cValue);
    DisplayAscii(cValue);
    return 0;
}