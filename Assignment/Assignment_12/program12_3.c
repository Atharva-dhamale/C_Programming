
//Sum of all factors of a number
//Time Complexity is : O(N/2)

#include<stdio.h>

int Sum_of_factor(int number)
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
            iFrequncy=iFrequncy+iCnt;
        }
    }
    return iFrequncy;
}
int main()
{
    int number=0;

    printf("Enter number :");
    scanf("%d",&number);

    printf("%d\n",Sum_of_factor(number));
    
    return 0;
}