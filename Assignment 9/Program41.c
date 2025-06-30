//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Write a program which accept number from user and display its digitd  
//                      in reverse order
//
// Input  : 2395
// output : 5
//          9
//          3
//          2
// Input  : 1018
// output : 8
//          1
//          0
//          1
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

double DisplayDigit(int iNo)
{
    int iDigit =0;
    if(iNo<0)
    {
        iNo =-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        printf("%d\n",iDigit);
        iNo=iNo/10;

    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number \n");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return 0;
}
