
//Write a program to find even factorial of given number

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int i=0;
    int iFact=0;
    iFact=1;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    
    for(i=1;i<=iNo;i++)
    {
        if((i%2)==0)
        {
            iFact=iFact*i;
        }
    }
    return iFact;
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter number of :");
    scanf("%d",&iValue);

    iRet=EvenFactorial(iValue);

    printf("Even factorial of number is %d\n",iRet);

    return 0;
}