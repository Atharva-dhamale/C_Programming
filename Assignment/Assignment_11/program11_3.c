
//Write a program which accept range from user and return addition  all numbers in between that range
//Range should contains positive numbers only

#include<stdio.h>

void RangeSum(int iStart,int iEnd)
{
    int i=0;
    int iAns=0;

    for(i=iStart;i<=iEnd;i++)
    {
        iAns=iAns+i;   
    }

    if((iStart>iEnd)||(iStart<0)||(iEnd<0))
    {
        printf("Invalid range\n");
    }
    else
    {
        printf("Addition is %d\n",iAns);
    }

    

    

}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter starting point :");
    scanf("%d",&iValue1);

    printf("Enter ending point :");
    scanf("%d",&iValue2);

    RangeSum(iValue1,iValue2);
    

    return 0;
}