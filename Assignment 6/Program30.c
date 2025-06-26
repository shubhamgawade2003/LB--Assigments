//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :write a program which accept number from user and display  its table
//                   in reverse order
//
// Input  : 5
// output : 50 45 40 35 30 25 20 15 10 5
// Input  : -5
// output : 50 45 40 35 30 25 20 15 10 5
// Input  : 2
// output : 20 18 16 14 12 10 8 6 4 2
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Table(int iNo)
{
    if(iNo<0)
    {
        iNo =-iNo;
    }
    
    int iCnt = 0;

    for (iCnt = 10; iCnt>=1; iCnt--)
    {
        printf("%d\t",iNo*iCnt);
    }
     return ;   
}

int main()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}