
//Write a program which accept number from user and dispaly its multiplication of factor

#include<stdio.h>

int MultiFact(int iNo)
{
    int i=0;
    int iMult=0;

    iMult=1;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    for (i=1;i<iNo;i++)
    {
        if((iNo%i)==0)
        {
            iMult=iMult*i;
        }
    }
    return iMult;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet=MultiFact(iValue);

    printf("%d",iRet);

    return 0;
}