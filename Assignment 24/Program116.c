//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Write a program which accept string from user and count number of
//                      capital charactors
//
// Input : "Marvellous Multi OS"
// Output: 4
//
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountCapital(char *str)
{
    int iCount =0;
    if(str == NULL)
    {
        return -1;
    }
    while(*str!='\0')
    {
        if((*str>= 'A')&&(*str <='Z'))
        {
            iCount++;
        }
        
        str++;

    }
    return iCount;
}
int main()
{
    char Arr[20]={'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet=CountCapital(Arr);
    printf("Number of Capital letter in strings :%d",iRet);

    return 0;
}