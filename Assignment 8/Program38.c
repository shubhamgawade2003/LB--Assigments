//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Write a program which accept distanse in kilometr and convert it into
//                      meter(1 kilometre=1000 meter).
//
// Input  : 5
// output : 5000
// Input  : 12
// output : 12000
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int KMtoMeter(int iNo)
{
    int KMtoM = 0.0;
    KMtoM = iNo * 1000;

    return KMtoM;
}

int main()
{
    int iValue = 0.0;

    int iRet = 0.0;

    printf("Enter distance \n");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);
    printf("km to meter is %d", iRet);

    return 0;
}
