//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :write a program which accepts the number from user and display its all  
//                      of  Non -factors 
//
// Input  :12
// output : 5 7 8 9 10 11   
// Input  :13
// output : 2 3 4 5 6 7 8 9 10 11 12       
// Input  :10
// output : 3 4  6 7 8 9   
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void NonFact(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt = 0;
     
    for (iCnt = 1; iCnt<= iNo ; iCnt++)
    {
        if((iNo%iCnt)!= 0)
        {
            printf("%d\t",iCnt);
        }
    }
   return;
    
}

int main()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

     NonFact(iValue);

    return 0;
}