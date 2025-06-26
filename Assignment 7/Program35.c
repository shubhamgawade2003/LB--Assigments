//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Write a program which returns difference between even factorial and odd
//                      factorial of given number
//
// Input  : 5
// output : -7   (8-15)
// Input  : -5
// output : -7  (8 -15 )
// Input  : 10
// output : 2895 (3840-945)
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int FactDiff( int iNo)
{
     if(iNo<0)
     {
        iNo= -iNo;
     }
     int iCnt = 0;
     int iFactEven =1,iFactOdd =1;
     for(iCnt = 1; iCnt<=iNo ;iCnt++)
     {
        if((iCnt % 2)==0)
        {
            iFactEven = iFactEven*iCnt;
        }
        else
        {
          iFactOdd = iFactOdd*iCnt;  
        }
     }  
     return iFactEven - iFactOdd;
}

int main()
{
   int iValue = 0,iRet = 0;

    printf("Enter the Number \n");
    scanf("%d",&iValue);

    iRet= FactDiff(iValue);
    printf("Factorail difference is %d",iRet);

    return 0;
}

