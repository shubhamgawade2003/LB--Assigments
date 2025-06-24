//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :write a program which accepts the number from user and display its factor  
//                      in decreasing order
//
// Input  :12
// output : 6 4 3 2 1    
// Input  :13
// output : 1       
// Input  :10
// output : 5 2 1   
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void FactRev(int iNo)
    {
    int iCnt = 0;
    
    for (iCnt=(iNo/2);iCnt>= 1;iCnt--)
    {
        if((iNo%iCnt)==0)
        {
           printf("%d\t",iCnt);
        }
        
    }
    printf("\n");
    
}

int main()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf(" %d",&iValue);

    FactRev(iValue);

    return 0;
}