//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :write a program which accepts the number from user and prints that number of  
//                    $ and * on screen  
//
// Input  : 5
// output : $ * $ * $* $ * $ * 
// Input  : 2 
// output : $ * $ *     
// Input  : -3
// output : $ * $ * $ *
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iNo)
{
    if(iNo<0)
    {
        iNo =-iNo;
    }
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf( " $   *\t");
    }
        
}

int main()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}