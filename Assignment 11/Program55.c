//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Write a program which accept number from user and display below pattern
//
//
// Input  : 5
// output : 2 4 6 8 10 
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt = 1; iCnt <=iNo; iCnt++)
    {
        printf("%d\t", (iCnt*2));
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
