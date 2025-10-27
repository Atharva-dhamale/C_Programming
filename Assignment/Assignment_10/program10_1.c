
//Write a program which accept radius of circle from user and calculate its area. Consider value of PI as 
// 3.14(Area=PI*radius*radius)

#include<stdio.h>

double CircleArea(float fRadius)
{
    double Area=0.0;
    float pi=0.0;

    pi=3.14;

    Area=pi*fRadius*fRadius;

    return Area;
}
int main()
{
    float fValue=0.0;
    double dRet=0.0;

    printf("Enter radius :");
    scanf("%f",&fValue);

    dRet=CircleArea(fValue);

    printf("Area of circle is %lf\n",dRet);

    return 0;
}
