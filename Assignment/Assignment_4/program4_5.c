
//Write a program which accept number from user and return difference between summation of all its factors and non factors

#include<stdio.h>

int FactDiff(int iNo)
{
    int i=0;
    int iSum1=0;
    int iSum2=0;
    int iAns=0;


    if(iNo<0)
    {
        iNo=-iNo;
    }
    for (i=1;i<iNo;i++)
    {
        if((iNo%i)==0)
        {
            iSum1=iSum1+i;
        }
        else
        {
            iSum2=iSum2+i;
        }
    }
    
    iAns=iSum1-iSum2;

    return iAns;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}