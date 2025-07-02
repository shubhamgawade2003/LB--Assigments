//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Accept number of rows and columns from user and display below pattern
//
//
// Input  : iColunm =4 iRow = 4
// output : A B C D
//          A B C D
//          A B C D
//          A B C D
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iColumn, int iRow)
{
    int iCntCol = 0;
    int iCntRow = 0;
    char ch = '\0';
    if((iColumn<0)||(iColumn>26))
    {
        printf("Invalid Column input\n");
        return ;
    }


    for (iCntCol = 1; iCntCol <= iColumn; iCntCol++)
    {
        ch ='A';
        for (iCntRow =1; iCntRow <=iRow; iCntRow++)
        {
            printf("%c\t",ch);
            ch++;
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
