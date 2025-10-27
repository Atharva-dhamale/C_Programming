
//Write a program which accept three numbers and print its multiplication

#include<stdio.h>

int Multiply(int a,int b,int c)
{
    int iAns=0;
    iAns=1;
    if(a!=0)
    
        iAns*=a;
    
    if(b!=0)
    
        iAns*=b;
    
    if(c!=0)
    
        iAns*=c;
    
    if((a==0)&&(b==0)&&(c==0))
    {
        return 0;
    }

    return iAns;
}
int main()
{
    int iValue1=0,iValue2=0,iValue3=0,iRet=0;

    printf("Please enter three numbers :");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);

    iRet=Multiply(iValue1,iValue2,iValue3);

    printf("%d",iRet);

    return 0;
}