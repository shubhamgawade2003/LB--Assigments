//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Accept number of rows and columns from user and display below pattern
//
//
// Input  : iColunm =6 iRow = 6
// output : 1 2 3 4 5 6
//          1 2       6
//          1   3     6
//          1     4   6
//          1       5 6
//          1 2 3 4 5 6        
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCntCol = 0;
    int iCntRow = 0;
    if (iRow != iCol)
    {
        printf("Invalid input");
        return;
    }

    for (iCntRow = 1; iCntRow <= iRow; iCntRow++)
    {

        for (iCntCol = 1; iCntCol <= iCol; iCntCol++)
        {
            if ((iCntRow == iCntCol) || (iCntCol == 1) || (iCntCol == iCol) || (iCntRow == 1) || (iCntRow == iRow))
            {
                printf("%d\t",iCntCol);
            }
            else
            {
                printf("\t");
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
