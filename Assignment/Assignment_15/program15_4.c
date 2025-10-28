
//Write a program which accept number from user and return multiplication of all digits.
//Time Complexity is : O(N)

#include<stdio.h>

int MUltDigits(int iNo)
{
   int iDigit=0;
   int iMult=0;
   iMult=1;

   if(iNo<0)
   {
    iNo=-iNo;
   }
   
   while(iNo>0)
   {
    iDigit=iNo%10;

    if(iDigit!=0)
    {
        iMult=iMult*iDigit;
    }
    
    
    iNo=iNo/10;
   }
   return iMult;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet=MUltDigits(iValue);
    printf("%d\n",iRet);
    
    
    return 0;
}