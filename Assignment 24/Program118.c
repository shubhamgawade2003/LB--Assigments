//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Write a program which accept string from user and return difference
//                      between frequency of small charactors and frequency of Capital
//                      letters
//
// Input : "MarvellouS"
// Output: 6
//
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Difference(char *str)
{
    int iCount1 =0,iCount2=0;
    if(str == NULL)
    {
        return -1;
    }
    while(*str!='\0')
    {
        if((*str>= 'a')&&(*str <='z'))
        {
            iCount1++;
        }
        else
        {
            iCount2++;
        }
        
        str++;

    }
    return iCount1-iCount2;
}
int main()
{
    char Arr[20]={'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet=Difference(Arr);
    printf("Difference small and Capital charactors in strings :%d",iRet);

    return 0;
}