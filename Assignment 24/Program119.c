//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Write a program which accept string from user and check wheather it 
//                      contains vowels in it or not
//                  
//
// Input : "MarvellouS"
// Output: TRUE
//
// Input:"Demo"
// Ouput:TRUE
//
//Input :"xyz"
//Output:false
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
    bool Flag = false;
    if(str == NULL)
    {
        return -1;
    }
    while(*str!='\0')
    {
        if((*str== 'a')||(*str =='e')||(*str=='i')||(*str=='o')||(*str=='u')||(*str== 'A')||(*str =='E')||(*str=='I')||(*str=='O')||(*str=='U'))
        {
            Flag =true;
             break;

        }
        
        str++;

    }
    return Flag;
}
int main()
{
    char Arr[20]={'\0'};
    bool bRet = false;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    bRet=ChkVowel(Arr);
    if(bRet == true)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no vowel");
    }

    return 0;
}