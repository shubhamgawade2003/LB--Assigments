//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Accept number of rows and columns from user and display below pattern
//
//
// Input  : iColunm =5 iRow = 4
// output : 4 4 4 4 4
//          3 3 3 3 3
//          2 2 2 2 2
//          1 1 1 1 1
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iColumn, int iRow)
{
    int iCntCol = 0;
    int iCntRow = 0;
    if(iRow<0)
    {
        iRow =-iRow;
    }


    for(iCntCol=iColumn;iCntCol>=1;iCntCol--)
    {

        for(iCntRow=iRow;iCntRow>=1;iCntRow--)
        {
            printf("%d\t",iCntCol);
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
