//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :write a program which accepts the N from user and prints odd number
//                    upto N  
//
// Input  : 10
// output : 1 3 5 7 9
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void OddDisplay(int iNo)
{
    if(iNo<0)
    {
        iNo =-iNo;
    }
    
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2)!=0)
        {
        printf( " %d\t",iCnt);
        }
    }    
}

int main()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}