//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Write a program to find Odd factorial of given number
//                     
//
// Input  : 5
// output : 15  (5 * 3 *1)
// Input  : -5
// output : 15   (5 * 3 *1)
// Input  : 10
// output : 945 (9 * 7 * 5 *3 *1)
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int OddFactorail( int iNo)
{
     if(iNo<0)
     {
        iNo= -iNo;
     }
     int iCnt = 0;
     int iFact =1;
     for(iCnt = 1; iCnt<=iNo ;iCnt++)
     {
        if((iCnt % 2)!=0)
        {
            iFact = iFact*iCnt;
        }
     }  
     return iFact;
}

int main()
{
   int iValue = 0,iRet = 0;

    printf("Enter the Number \n");
    scanf("%d",&iValue);

    iRet= OddFactorail(iValue);
    printf("Odd Factorail of number is %d",iRet);

    return 0;
}

