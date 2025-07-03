//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Accept number of rows and columns from user and display below pattern
//
//
// Input  : iColunm =4 iRow = 4
// output : 1 2 3 4 
//          5 6 7 8
//          9 1 2 3
//          4 5 6 7
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iColumn)
{
    int iCntCol = 0;
    int iCntRow = 0;
    int iNum = 1;

    for(iCntRow = 1; iCntRow <= iRow; iCntRow++)
    {
        for(iCntCol = 1; iCntCol <= iColumn; iCntCol++)
        {
            if(iNum>9)
            {
                iNum = 1;
            }
            printf("%d\t", iNum);
            iNum++;
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
