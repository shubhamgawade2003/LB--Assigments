#include <stdio.h>

void Display(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    iCnt = 1;

    while (iNo >= iCnt)
    {
        printf("*");
        iNo--;
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the Number\n");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}