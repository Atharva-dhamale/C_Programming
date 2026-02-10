#include<stdio.h>


int Reverse(int iNo)
{
    static int iDigit=0;
    static int iAns=0;

    if(iNo!=0)
    {
        iDigit=iNo%10;
        
        iAns=iAns*10+iDigit;

        iNo=iNo/10;

        Reverse(iNo);
        
    }
    return iAns;
    
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet=Reverse(iValue);

    printf("Reverse number is : %d\n",iRet);

    return 0;
}