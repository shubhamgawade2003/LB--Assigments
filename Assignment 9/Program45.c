//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Write a program which accept number from user and Count frequency of
//                       such number less than 6 in it.
//
// Input  : 2395
// output : 3
//
// Input  : 1018
// output : 3
//
// Input  : 9440
// output : 3
//
// Input  : 922432
// output : 5
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Count(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit < 6)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    iRet = Count(iValue);

    printf("%d", iRet);

    return 0;
}
