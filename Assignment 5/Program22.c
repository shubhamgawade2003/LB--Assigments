//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :write a program which accepts the number from user and prints  number till
//                    that number on screen  
//
// Input  : 5
// output : 1 2 3 4 5 
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

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf( " %d\t",iCnt);
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