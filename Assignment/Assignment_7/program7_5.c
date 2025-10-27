
//Write a program which accept number from user and print first 5 multiples of N

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int i=0;
    int j=iNo;

    for(i=1;i<=5;i++)
    {
            printf("%d ",iNo*i);
    }
}
int main()
{
    int iValue=0;
    printf("Enter number :");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);
    printf("\n");

    return 0;
}