//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Write a program which accept radius of circle from user and calculate
//                      its area .Consider value of PI as 3.14.
//
// Input  : 5.3
// output : 88.2026
// Input  : 10
// output : 339.6224
// Input  : 4
// output : 50.24002
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

double CircleArea( float fRadius )
{
    double dArea =0.0;
    const float PI = 3.14f;
    dArea = PI* fRadius*fRadius;
    
    return dArea;

     
}

int main()
{
   float fValue = 0.0f;
   double dRet = 0.0;

    printf("Enter radius \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);
    printf("Area of Circle %4lf",dRet);

    return 0;
}

