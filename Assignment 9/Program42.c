//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Write a program which accept number from user and check whether it contains
//                      0  in it or not.
//
// Input  : 2395
// output : There is no Zero
//
// Input  : 1018
// output :  It contains Zero
//
// Input  : 9000
// output :  It contains Zero
//
// Input  : 10687
// output :  It contains Zero
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

#define true 1
#define false 0

bool ChkZero(int iNo)
{
    int iDigit = 0;
    bool bFlag = false;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            bFlag = true;
            break;
        }

        iNo = iNo / 10;
    }

    return bFlag;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if(bRet == true)
    {
        printf("It contains Zero\n");
    }
    else
    {
        printf("There is No Zero\n");
    }

    return 0;
}
