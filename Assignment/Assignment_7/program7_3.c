
//Write a program which accept number from user and print its numbers line

#include<stdio.h>

void Display(int iNo)
{
    int i=0;

    for(i=-iNo;i<=0;i++)
    {
        printf("%d ",i);
    }
    for(i=1;i<=iNo;i++)
    {
        printf("%d ",i);
    }
}
int main()
{
    int iValue=0;
    printf("Enter number :");
    scanf("%d",&iValue);

    Display(iValue);
    printf("\n");

    return 0;
}