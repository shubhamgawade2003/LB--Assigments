//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Write a program which accept number from user and display below pattern
//
//
// Input  : 5
// output : A B C D E
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iNo)
{
    char cAlphabet = 'A';
    int iCnt = 0;
    if ((iNo < 0) || (iNo > 26))
    {
        printf("invalid input");
        return;
    }
    for (iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("%c\t", cAlphabet);
        cAlphabet++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}
