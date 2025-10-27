
//Write a program which accept two numbers and check whether numbers are equal or not

#include<stdio.h>
#include<stdbool.h>

bool ChkEqual(int a,int b)
{
    if(a==b)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue1=0,iValue2=0;
    bool bRet=false;
    printf("Please enter two numbers :");
    scanf("%d%d",&iValue1,&iValue2);

    bRet=ChkEqual(iValue1,iValue2);

    if(bRet==true)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not equal\n");
    }
    
    return 0;
}