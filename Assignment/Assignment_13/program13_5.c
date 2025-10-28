
//Print sum of First N even numbers
//Time Complexity is : O(N)

#include<stdio.h>

int sum_even_numbers(int limit)
{
   int iCnt=0;
   int iSum=0;

   for(iCnt=1;iCnt<=limit;iCnt++)
   {
    if((iCnt%2)==0)
    {
        iSum=iSum+iCnt;
    }
   }
   return iSum;
}
int main()
{
    int limit=0;

    printf("Enter number :");
    scanf("%d",&limit);

    printf("Sum of N even numbers is %d\n",sum_even_numbers(limit));
    
    
    return 0;
}