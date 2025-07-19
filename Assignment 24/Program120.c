//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Write a program which accept string from user and display in reverese
//                      order
//
// Input : "Marvellous"
// Output: "suollevraM"
//
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Reverse(char *str)
{
    int iLength =0;
    int iCnt =0;
    while(*str!='\0')
    {
        iLength++;
        str++;
    }
    str--;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        printf("%c",*str);
        str--;
    }
    printf("\n");


}
int main()
{
    char Arr[20]={'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);

    return 0;
}