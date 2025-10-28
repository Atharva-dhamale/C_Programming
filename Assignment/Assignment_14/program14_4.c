
//Write a program which accept number from user and count frequency of 4 in it.
//Time Complexity is : O(N)

#include<stdio.h>

int CountFour(int iNo)
{
   int iDigit=0;
   int iFrequency=0;

   if(iNo<0)
   {
    iNo=-iNo;
   }
   
   while(iNo>0)
   {
    iDigit=iNo%10;

    if(iDigit==4)
    {
        iFrequency++;
    }
    iNo=iNo/10;
   }
   return iFrequency;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet=CountFour(iValue);
    printf("%d\n",iRet);
    
    
    return 0;
}