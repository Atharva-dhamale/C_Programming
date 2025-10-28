
//Print sum of First N numbers
//Time Complexity is : O(N)

#include<stdio.h>

int sum_natural_numbers(int limit)
{
   int iCnt=0;
   int iSum=0;

   for(iCnt=1;iCnt<=limit;iCnt++)
   {
    iSum=iSum+iCnt;
   }
   return iSum;
}
int main()
{
    int limit=0;

    printf("Enter number :");
    scanf("%d",&limit);

    printf("Sum of N natural numbers is %d\n",sum_natural_numbers(limit));
    
    
    return 0;
}