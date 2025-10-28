
//Write a program which accept range from user and display all numbers in between that range in reverse order

#include<stdio.h>

void RangeDisplayRev(int iStart,int iEnd)
{
    int i=0;

    for(i=iEnd;i>=iStart;i--)
    {
        printf("%d ",i);
    }
    if(iStart>iEnd)
    {
        printf("Invalid range");
    }
}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter starting point :");
    scanf("%d",&iValue1);

    printf("Enter ending point :");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);
    printf("\n");

    return 0;
}