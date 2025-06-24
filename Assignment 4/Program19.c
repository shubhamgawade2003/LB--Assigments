//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :write a program which accepts the number from user and return Summation its all  
//                      of  Non -factors 
//
// Input  :12
// output : 50
// Input  :13
// output : 77      
// Input  :10
// output : 37 
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int SumNonFact(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt = 0;
    int iSum = 0;
     
    for (iCnt = 1; iCnt<= iNo ; iCnt++)
    {
        if((iNo%iCnt)!= 0)
        {
            iSum = iSum + iCnt;
            
        }
    }
   return iSum;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet=SumNonFact(iValue);

    printf("%d",iRet);

    return 0;
}