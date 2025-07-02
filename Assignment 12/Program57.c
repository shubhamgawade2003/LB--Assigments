//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Accept number of rows and columns from user and display below pattern
//
//
// Input  : iColunm =3 iRow =3
// output : 1 2 3
//          1 2 3
//          1 2 3
//
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Pattern(int iColumn, int iRow)
{
    int iCnt1 = 0;
    int iCnt2 = 0;

    for (iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
    {
        for (iCnt2 = 1; iCnt2 <= iColumn; iCnt2++)
        {
            printf("%d\t",iCnt2);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of columns:\n");
    scanf("%d", &iValue1);

    printf("Enter the number of Rows:\n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
