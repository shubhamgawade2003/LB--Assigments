#include<stdio.h>
#include <stdbool.h>

#define true 1
#define false 0


bool checkEven (int iNo)
{
    if((iNo%2)==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int iValue = 0;
    bool bRet= false ;

    printf("Enter the Number");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        printf("%d is Even Number",iValue);
    }
    else
    {
        printf("%d is Odd Number",iValue);
    }

    return 0;
}