//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Write a program which accept area in squre feet and convert it into
//                      squre meter(i squre feet = 0.0929 Squre meter).
//
// Input  : 10
// output : 0.464515
// Input  : 7
// output : 0.650321
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

double SqureMeter(int iValue)
{
    double dSqureMeterValue = 0.0;
    dSqureMeterValue = (iValue * 0.0929);

    return dSqureMeterValue;
}

int main()
{
    int iValue = 0.0;

    double dRet = 0.0;

    printf("Enter Area in Squrefeet \n");
    scanf("%d", &iValue);

    dRet = SqureMeter(iValue);
    printf("temperature in celcius is %lf", dRet);

    return 0;
}
