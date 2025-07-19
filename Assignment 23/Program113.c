//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Accept charactor from user.If charactor is Capitsal Display all the 
//                      charactors from input charactors till Z and if it is small then
//                      Display all the charactors from input charactors till z.
//                       
//
// Input : Q
// Output: Q R S T U V W X Y Z
// Input : m
// Output: m n o p q r s t u v w x y z
// Input : 4
// Output: 
// Input : %
// Output: 
//
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))  
    {
        for(char i = ch; i <= 'Z'; i++)
        {
            printf("%c ", i);
        }
    }
    else if((ch >= 'a') && (ch <= 'z')) 
    {
        for(char i = ch; i <= 'z'; i++)
        {
            printf("%c ", i);
        }
    }

}

int main()
{
    char cValue = '\0';
    printf("Enter the character: \n");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}
