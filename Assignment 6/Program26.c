/////////////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :write a program which accepts the number from user and if number is less than
//                    50 prints small and if it is greater than 50 and smaller 100 then prints the 
//                    medium and grater than 100 prints large
// Input  : 75 
// output : Medium
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    if(iNo<50)
    {
        printf("Small");
    }
    else if((iNo>=50)&&(iNo<100))
    {
        printf("Medium");
    }
    else if (iNo>=100)
    {
        printf("Large");
    }
    
    
        
}

int main()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}