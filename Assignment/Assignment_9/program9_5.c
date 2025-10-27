
//Write a program to which returns difference between  even factorial and odd factorial of given number

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int i=0;
    int iFact1=0;
    int iFact2=0;
    int iAns=0;

    iFact1=1;
    iFact2=1;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    
    for(i=1;i<=iNo;i++)
    {
        if((i%2)==0)
        {
            iFact1=iFact1*i;
        }
    }
    for(i=1;i<=iNo;i++)
    {
        if((i%2)!=0)
        {
            iFact2=iFact2*i;
        }
    }

    iAns=iFact1-iFact2;

    return iAns;
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter number of :");
    scanf("%d",&iValue);

    iRet=FactorialDiff(iValue);

    printf("Factorial difference is %d\n",iRet);

    return 0;
}