//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :write a program which accepts the number from user and return differnce between
//                    Sumation of  its all  of factors and Non -factors 
//
// Input  :12
// output : -22
// Input  :13
// output : -63      
// Input  :10
// output : -19
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Factdiff(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt = 0;
    int iSumfact = 0;
    int iSumNon = 0;
    
     
    for (iCnt = 1; iCnt<= iNo ; iCnt++)
    {
        if((iNo%iCnt)== 0)
        {
            iSumfact = iSumfact + iCnt;
            
        }
        else 
        {
            iSumNon = iSumNon + iCnt;
        }
    }
     
   return iSumfact-iSumNon;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet=Factdiff(iValue);

    printf("%d",iRet);

    return 0;
}