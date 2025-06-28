//////////////////////////////////////////////////////////////////////////////////////////////
// problem statement :  Write a program which accept temperature in Fahrenheit and convert it into
//                      celcius(1 celcius = (Fahrenheit-32)*(5/9)).
//
// Input  : 10
// output : -12.2222
// Input  : 34
// output : 1.11111
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

double FhtoCs(float fTemp)
{
    double dCsvalue = 0.0;
    dCsvalue = ((fTemp - 32) * (5.0 / 9.0));

    return dCsvalue;
}

int main()
{
    float fValue = 0.0f;

    double dRet = 0.0;

    printf("Enter temprature in Fahrenheit \n");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);
    printf("temperature in celcius is %lf", dRet);

    return 0;
}
