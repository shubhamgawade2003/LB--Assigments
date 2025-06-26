//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :write a program which accept number from user and display  below pattern
//                   
//
// Input  : 5
// output : *  *  *  *  *   #  #  #  #  #  
// Input  : 6
// output : *  *  *  *  *  *   #  #  #  #  #  #
// Input  : -5
// output : *  *  *  *  *   #  #  #  #  # 
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
    
    for (iCnt = 1; iCnt<=iNo; iCnt++)
    {
        printf("*\t");
    }
    for (iCnt = 1; iCnt<=iNo; iCnt++)
    {
        printf("#\t");
    }
     return ;   
}

int main()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}