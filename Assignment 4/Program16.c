//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :write a program which accepts the number from user and display its multiplication  
//                      of factors 
//
// Input  :12
// output : 144     
// Input  :13
// output : 1       
// Input  :10
// output : 10    
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int MulFact(int iNo)
{
    int iCnt = 0;
    int iMul = 1;
    for (iCnt = 1; iCnt<=(iNo/2);iCnt++)
    {
        if((iNo%iCnt)==0)
        {
           iMul = iMul * iCnt;
        }
        
    }
    return iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet = MulFact(iValue);

    printf("%d",iRet);

    return 0;
}