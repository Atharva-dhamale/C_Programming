
//Accept number from user and check whether it is even or odd

#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    if((iNo%2)==0)
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
    int iValue=0;
    bool bRet=false;

    printf("Enter number");
    scanf("%d",&iValue);

    bRet=CheckEven(iValue);

    if(bRet==true)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }
    
    return 0;
}