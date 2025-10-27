
//Write a program which accept distance in kilometer and convert it into meter.
//(1km = 1000 meter)

#include<stdio.h>

int KmToMeter(int iNo)
{
    int iAns=0;

    iAns=iNo*1000;

    return iAns;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter distance in km :");
    scanf("%d",&iValue);

    iRet=KmToMeter(iValue);

    printf("%d Km = %d Meter\n",iValue,iRet);

    return 0;
}
