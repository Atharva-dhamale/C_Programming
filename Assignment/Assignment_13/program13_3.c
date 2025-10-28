
//Print all odd number upto N
//Time Complexity is : O(N)

#include<stdio.h>

void print_odd_number(int limit)
{
   int iCnt=0;

   for(iCnt=1;iCnt<=limit;iCnt++)
   {
    if((iCnt%2)!=0)
    {
        printf("%d ",iCnt);
    }
   }
}
int main()
{
    int limit=0;

    printf("Enter number :");
    scanf("%d",&limit);

    print_odd_number(limit);
    
    
    return 0;
}