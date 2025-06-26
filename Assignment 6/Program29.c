//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :write a program which accept number from user and display  its table
//                   
//
// Input  : 5
// output : 5 10 15 20 25 30 35 40 45 50
// Input  : -5
// output : 5 10 15 20 25 30 35 40 45 50
// Input  : 2
// output : 2 4 6 8 10 12 14 16 18 20
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

    for (iCnt =1; iCnt<=10; iCnt++)
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