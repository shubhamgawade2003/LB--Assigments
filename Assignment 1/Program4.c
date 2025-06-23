#include <stdio.h>
#include <stdbool.h>

#define true 1
#define false 0

bool check(int iNo)
{
    if ((iNo % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number\n");
    scanf("%d", &iValue);

    bRet = check(iValue);

    if (bRet == 1)
    {
        printf("%d is divisible by 5", iValue);
    }
    else
    {
        printf("%d is not divisible by 5", iValue);
    }

    return 0;
}