//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Accept charactor from user.If charactor is small Display its corresponding
//                      capital charactor,and if it is small then Display its corresponding
//                       Capital.in other case display as it is.
//
// Input : Q
// Output: q
// Input : m
// Output: M
// Input : 4
// Output: 4
// Input : %
// Output: %
//
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{

    if((ch>='A')&&(ch<='Z'))
    {
        printf("%c",ch+32);
    }
    else if ((ch>='a')&&(ch<='z'))
    {
        printf("%c",ch-32);
    }
    else
    {
        printf("%c",ch);
    }
    

}

int main()
{
    char cValue ='\0';
    printf("Enter the charactor\n");
    scanf("%c",&cValue);
    Display(cValue);
    return 0;
}