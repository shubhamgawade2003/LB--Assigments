//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Accept number of rows and columns from user and display below pattern
//
//
// Input  : iColunm =5 iRow = 3
// output : A A A A A
//          B B B B B
//          C C C C C
//        
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iColumn, int iRow)
{
    int iCntCol = 0;
    int iCntRow = 0;
    char ch = '\0';
    if((iRow<0)||(iRow>26))
    {
        printf("Invalid Row input\n");
        return ;
    }
    ch ='A';
    for(iCntCol=1;iCntCol<=iColumn;iCntCol++)
    {

        for(iCntRow=1;iCntRow<=iRow;iCntRow++)
        {
            printf("%c\t",ch);
        }
        ch++;
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
