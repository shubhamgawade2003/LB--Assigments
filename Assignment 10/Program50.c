//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Write a program which accept number from user and return summation of 
//                     even digits and odd digits
//
// Input  : 2395
// output : -15
//
// Input  : 1018
// output : 6
//
// Input  : 8440
// output : 16
//
// Input  : 5733
// output : -18
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int MultDiff(int iNo)
{
    int iDigit = 0;
    int iSumEven = 0;
    int iSumOdd = 0 ;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit %2)== 0)
        {
            iSumEven =iSumEven +iDigit;
        }
        else if((iDigit %2)!= 0)
        {
            iSumOdd = iSumOdd +iDigit;
        }

        iNo = iNo / 10;
    }

    return (iSumEven-iSumOdd) ;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    iRet = MultDiff(iValue);

    printf("%d", iRet);

    return 0;
}
