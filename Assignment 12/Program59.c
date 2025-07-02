//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Accept number of rows and columns from user and display below pattern
//
//
// Input  : iColunm = 5 iRow = 3
// output : 5 4 3 2 1
//          5 4 3 2 1
//          5 4 3 2 1
//
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Pattern(int iColumn, int iRow)
{
    int iCnt1 = 0;
    int iCnt2 = 0;

    for (iCnt1 = 1; iCnt1 <= iColumn; iCnt1++)
    {
        for (iCnt2 =1; iCnt2 <=iRow; iCnt2++)
        {
            if((iCnt2%2)==0)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of Rows:\n");
    scanf("%d", &iValue1);

    printf("Enter the number of Columns:\n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
