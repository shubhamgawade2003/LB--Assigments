//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Write a program which accept number from user and return mulitiplication of 
//                      all digits
//
// Input  : 2395
// output : 270
//
// Input  : 1018
// output : 8
//
// Input  : 9440
// output : 144
//
// Input  : 922432
// output : 864
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMul = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
            iMul=iMul*iDigit;
        }

        iNo = iNo / 10;
    }

    return iMul ;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("%d", iRet);

    return 0;
}
