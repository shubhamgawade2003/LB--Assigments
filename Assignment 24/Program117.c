//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Write a program which accept string from user and count number of
//                      Small charactors
//
// Input : "Marvellous"
// Output: 9
//
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountSmall(char *str)
{
    int iCount =0;
    if(str == NULL)
    {
        return -1;
    }
    while(*str!='\0')
    {
        if((*str>= 'a')&&(*str <='z'))
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

    iRet=CountSmall(Arr);
    printf("Number of small letter in strings :%d",iRet);

    return 0;
}