
//write a program which accepts total marks and obtained marks from user and calculate percentage

#include<stdio.h>

float Percentage(int iNo1,int iNo2)
{
    float fAns;

    fAns=(((float)iNo2/iNo1)*100);

    return fAns;
}
int main()
{
    int iValue1=0,iValue2=0;
    float fRet=0.0;

    printf("Enter total marks :");
    scanf("%d",&iValue1);

    printf("Enter obtained marks :");
    scanf("%d",&iValue2);

    fRet=Percentage(iValue1,iValue2);
    printf("%f",fRet);

    return 0;
}