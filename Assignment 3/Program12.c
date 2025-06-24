//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :write a program which accepts the one number from user and print Even
//                     factors of that number
//
// Input  :24
// output : 1 2 4 6 8 12
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayFactor(int iNo)
{
    int i;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (i = 1; i <= iNo / 2; i++)
    {
        if (iNo %i ==0)
        {
            printf("%d\t", i);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the Number\n");
    scanf("%d", &iValue);
    DisplayFactor(iValue);
    return 0;
}