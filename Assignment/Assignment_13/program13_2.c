
//Print all even number upto N
//Time Complexity is : O(N)

#include<stdio.h>

void print_even_number(int limit)
{
   int iCnt=0;

   for(iCnt=1;iCnt<=limit;iCnt++)
   {
    if((iCnt%2)==0)
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

    print_even_number(limit);
    printf("\n");
    
    return 0;
}