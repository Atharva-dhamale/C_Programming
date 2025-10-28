
//Print all number from 1 to N
//Time Complexity is : O(N)

#include<stdio.h>

void print_number(int limit)
{
   int iCnt=0;

   for(iCnt=1;iCnt<=limit;iCnt++)
   {
    printf("%d ",iCnt);
   }
}
int main()
{
    int limit=0;

    printf("Enter number :");
    scanf("%d",&limit);

    print_number(limit);
    printf("\n");
    
    return 0;
}