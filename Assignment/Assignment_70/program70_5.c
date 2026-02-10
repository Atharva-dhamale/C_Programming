#include<stdio.h>


int Mult(int iNo)
{
    static int iDigit=0;
    static int iProduct=1;

    if(iNo!=0)
    {
        iDigit=iNo%10;
        iProduct*=iDigit;
        iNo=iNo/10;

        Mult(iNo);
        
    }
    return iProduct;
    
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet=Mult(iValue);

    printf("Product is : %d\n",iRet);

    return 0;
}