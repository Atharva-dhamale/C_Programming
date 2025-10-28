
//Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.
//Time Complexity is : O(N)

#include<stdio.h>

int CountDiff(int iNo)
{
   int iDigit=0;
   int iFrequency1=0;
   int iFrequency2=0;
   int iDiff=0;

   if(iNo<0)
   {
    iNo=-iNo;
   }
   
   while(iNo>0)
   {
    iDigit=iNo%10;

    if((iDigit%2)==0)
    {
        iFrequency1=iFrequency1+iDigit;

    }
    else if((iDigit%2)!=0)
    {
        iFrequency2=iFrequency2+iDigit;
    }

    

    iNo=iNo/10;

    iDiff=iFrequency1-iFrequency2;
   }
   return iDiff;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet=CountDiff(iValue);
    printf("%d\n",iRet);
    
    
    return 0;
}