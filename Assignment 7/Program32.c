//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Accept i US Dollar and return its corrosponding value in Indian currency
//                     consider 1$ as 70 rupees
//
// Input  : 10
// output : 700 
// Input  : 3
// output : 210
// Input  : 1200
// output : 84000
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int DollerToINR( int iNo)
{
    long unsigned int iINR =0;
     if(iNo)
     {
        iINR = iNo*70;
     }
     return iINR;   
}

int main()
{
   int iValue = 0;
  int iRet = 0;

    printf("Enter the Number of USD\n");
    scanf("%d",&iValue);

    iRet= DollerToINR(iValue);
    printf("Value of INR is %d",iRet);

    return 0;
}

