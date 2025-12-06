
//write a recursive program which accept number from user and return its product of digits
//  Input :523
//  Output :30

#include<stdio.h>

int Mult(int iNo)
{
    static int iDigit=0;
    static int iSum=1;

    if(iNo!=0)
    {
        iDigit=iNo%10;

        iSum*=iDigit;

        iNo=iNo/10;

        Mult(iNo);
    }
    return iSum;

}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet=Mult(iValue);

    printf("%d\n",iRet);

    return 0;
}