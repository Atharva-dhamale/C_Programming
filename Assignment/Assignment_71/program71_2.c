#include<stdio.h>


int Max(int iNo)
{
    static int iDigit=0;
    static int iMax=1;

    if(iNo!=0)
    {
        iDigit=iNo%10;
        
        if(iMax<iDigit)
        {
            iMax=iDigit;
        }

        iNo=iNo/10;

        Max(iNo);
        
    }
    return iMax;
    
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet=Max(iValue);

    printf("Largest digit is : %d\n",iRet);

    return 0;
}