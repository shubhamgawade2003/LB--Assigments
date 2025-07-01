//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Write a program which accept number from user and return count of odd
//                      numbers
//
// Input  : 2395
// output : 3
//
// Input  : 1018
// output : 2
//
// Input  : 9440
// output : 1
//
// Input  : 922432
// output : 2
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountOdd(int iNo)
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

        if ((iDigit % 2)!= 0)
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

    iRet = CountOdd(iValue);

    printf("%d", iRet);

    return 0;
}
