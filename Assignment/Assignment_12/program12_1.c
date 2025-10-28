
//print all factors of a number
//Time complexity is : O(N/2)

#include<stdio.h>

void print_factors(int number)
{
    int iCnt=0;
    
    if(number<0)
    {
        number=-number;
    }

    for(iCnt=1;iCnt<=number/2;iCnt++)
    {
        if((number%iCnt)==0)
        {
            printf("%d ",iCnt);
        }
    }
}
int main()
{
    int number=0;

    printf("Enter number :");
    scanf("%d",&number);

    print_factors(number);
    printf("\n");
    
    return 0;
}