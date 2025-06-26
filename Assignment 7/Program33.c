//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Write a program to find even factorial of given number
//                     
//
// Input  : 5
// output : 8   (4*2)
// Input  : -5
// output : 8   (4*2)
// Input  : 10
// output : 3840 (10*8*6*4*2)
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int EvenFactorail( int iNo)
{
     if(iNo<0)
     {
        iNo= -iNo;
     }
     int iCnt = 0;
     int iFact =1;
     for(iCnt = 1; iCnt<=iNo ;iCnt++)
     {
        if((iCnt % 2)==0)
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

    iRet= EvenFactorail(iValue);
    printf("Even Factorail of number is %d",iRet);

    return 0;
}

