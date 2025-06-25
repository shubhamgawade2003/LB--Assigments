//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :write a program which accepts the N and prints 5 multiple of N
//                   
//
// Input  : 4
// output : 4 8 12 16 20
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    if(iNo<0)
    {
        iNo =-iNo;
    }
    
    int iCnt = 0;

    for (iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf( " %d \t",iCnt*iNo);
    }
        
}

int main()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}