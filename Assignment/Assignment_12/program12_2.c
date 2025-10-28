
//Count total factors of a number
//Time Complexity is : O(N/2)

#include<stdio.h>

int count_factors(int number)
{
    int iCnt=0;
    int iFrequncy=0;


    if(number<0)
    {
        number=-number;
    }

    for(iCnt=1;iCnt<=number/2;iCnt++)
    {
        if((number%iCnt)==0)
        {
            iFrequncy++;
        }
    }
    return iFrequncy;
}
int main()
{
    int number=0;

    printf("Enter number :");
    scanf("%d",&number);

    printf("%d\n",count_factors(number));
    
    return 0;
}