//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Accept number of rows and columns from user and display below pattern
//
//
// Input  : iColunm =4 iRow = 4
// output : 2 4 6 8 10
//          1 3 5 7 9
//          2 4 6 8 10 
//          1 3 5 7 9
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iColumn)
{
    int iCntCol = 0;
    int iCntRow = 0;
    int iNum = 0;
    

    for (iCntRow = 1; iCntRow <= iRow; iCntRow++)
    {
        if ((iCntRow % 2) == 0)
    {
        iNum = 1;
    }
    else
    {
        iNum = 2;
    }
        for (iCntCol = 1; iCntCol <= iColumn+1; iCntCol++)
        {
            
            printf("%d\t", iNum);
            iNum=iNum+2;
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
