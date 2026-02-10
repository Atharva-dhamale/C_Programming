#include<stdio.h>


int Fact(int iNo)
{
    static int iFact=1;
    static int iCnt=1;

    if(iNo>=iCnt)
    {
        iFact=iFact*iNo;

        iNo--;
        Fact(iNo);
        
    }
    return iFact;
    
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet=Fact(iValue);

    printf("Factorial is : %d\n",iRet);

    return 0;
}