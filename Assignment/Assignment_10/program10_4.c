
//Write  a program which accept temperature in fahrenheit and convert it into celsius.
//(1 celsius =(Fahrenheit-32)*(5/9))

#include<stdio.h>

double FhToCs(float fTemp)
{
    float fAns=0.0;

    fAns=((fTemp-32)*(5.0/9.0));

    return fAns;
}
int main()
{
    float fValue=0.0;
    double dRet=0.0;

    printf("Enter temperature in fahrenheit :");
    scanf("%f",&fValue);

    dRet=FhToCs(fValue);

    printf("%f fahrenheit = %lf Celsius\n",fValue,dRet);

    return 0;
}
