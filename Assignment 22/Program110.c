//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Accept divison of student from user and depends on the division display
//                      exam timing.There are 4 division inschool as A,B,C,D.Exam of division A
//                      is at 7Am,B is 8.30AM,C at 9.30AM,and D is at 10.30AM.
//                       (Application should be case insesitive)
// Input  : c
// output : Your Exam at 9.30 AM
// Input  : D
// output : Your Exam at 10.30 AM
//
//
//////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void DisplaySchedule(char ch)
{
    
    if((ch=='A')||(ch=='a'))
    {
        printf("Your Exam at 7 AM");

    }
    else if ((ch=='B')||(ch=='b'))
    {
        printf("Your Exam at 8.30 AM");
    }
       else if ((ch=='C')||(ch=='c'))
    {
        printf("Your Exam at 9.30 AM");
    }
       else if ((ch=='D')||(ch=='d'))
    {
        printf("Your Exam at 10.30 AM");
    }
    else
    {
        printf("Invalid input");
    }

    
}

int main()
{
    char cValue = '\0';

    printf("Enter the division\n");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}
