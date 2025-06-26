//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :write a program which accepts the single digitnumber from user and prints it 
//                    in words  
//
// Input  : 4
// output : Four
// Input  : 3
// Output : Three
// Input  : 12
// Output : Invalid Number
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }

  if( iNo>9)
  {
    printf("Invalid Number");
  }

  switch (iNo)
  {
  case 0:
    printf("Zero");
    break;
  case 1:
    printf("One");
    break;
  case 2:
    printf("Two");
    break;
  case 3:
    printf("Three");
    break;
  case 4:
    printf("Four");
    break;
  case 5:
    printf("Five");
    break;
  case 6:
    printf("Six");
    break;
  case 7 :
    printf("Seven");
    break;
  case 8:
    printf("Eight");
    break;
  case 9:
    printf("Nine");
    break;

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