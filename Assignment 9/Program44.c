//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Write a program which accept number from user and Count frequency of 4
//                      in it.
//
// Input  : 2395
// output : 0
//
// Input  : 1018
// output : 0
//
// Input  : 9440
// output : 2
//
// Input  : 922432
// output : 1
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>


int  CountFour(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 4)
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

    iRet = CountFour(iValue);

    printf("%d",iRet);

    return 0;
}
